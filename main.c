#include<stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SIZE (1 << 28) // Maximum size of 2^30, 2^20, 2^24

extern double dotProduct(double *vectorA, double *vectorB, int size);
extern double dotProduct_asm(double* vectorA, double* vectorB, int size);

int main() {
	srand(time(NULL));
	double sdot = 0.0;
	double sdot_asm = 0.0;
	int vectorSize = MAX_SIZE;
	int match = 1;

	double* vectorA = (double*)malloc(vectorSize * sizeof(double));
	double* vectorB = (double*)malloc(vectorSize * sizeof(double));

	for (int i = 0; i < vectorSize; i++) {
		vectorA[i] = (double)rand() / 3;
		vectorB[i] = (double)rand() / 3;
	}

	int iterations = 30;
	double timeC = 0;
	double timeAsm = 0;

	for (int i = 0; i < iterations; i++) {
		clock_t start_C = clock();
		sdot = dotProduct(vectorA, vectorB, vectorSize);
		clock_t end_C = clock();
		timeC += ((double)(end_C - start_C)) / CLOCKS_PER_SEC;

		clock_t start_ASM = clock();
		sdot_asm = dotProduct_asm(vectorA, vectorB, vectorSize);
		clock_t end_ASM = clock();
		timeAsm += ((double)(end_ASM - start_ASM)) / CLOCKS_PER_SEC;


	}

	double avgExeTimeC = timeC / iterations;
	double avgExeTimeASM = timeAsm / iterations;
	printf("Average execution time (C) is %lf seconds\n", avgExeTimeC);
	printf("Average execution time (ASM) is %lf seconds\n", avgExeTimeASM);

	if (match) {
		printf("All iterations contain matching results. The x86-64 kernel output is correct\n");
	}
	else {
		printf("The iterations did not produce matching results.");
	}
	printf("The dot product of these two vectors are: %lf using C\n", sdot);
	printf("The dot product of these two vectors are: %lf using ASM\n", sdot_asm);
	free(vectorA);
	free(vectorB);

	return 0;
}