#include<stdio.h>


double dotProduct(double *vectorA, double *vectorB, int size) {
    double result = 0.0;
   
    for (int i = 0; i < size; i++) {
        result += (vectorA[i] * vectorB[i]);
    }

    return result;
}