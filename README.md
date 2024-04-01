# LBYARCH-C_assembly_interface

# Created by Marcus Calalang & Barron Ong on March-April 2024
The project specifications are as follows:
![image](https://github.com/Marcusgb21/LBYARCH-C_assembly_interface/assets/64012244/0035496c-1fa0-4eb1-8d1e-c01e95748a3e)

# C Program
There are two C files: "main" and "dotProduct". The main file is responsible for initializing the vector with random values, calculating the average execution time of both the dotProduct and assembly files, and verifying the consistency of the vector values.

On the other hand, the dotProduct file contains the implementation of the dotProduct algorithm, which takes vectorA and vectorB containing n elements. It then multiplies the corresponding elements of the two vectors together. Lastly, it sums up all the products contained in step 2. 

# ASM file
The ASM file does the same operation as the dot product file that utilizes SIMD instructions(mulsd and addsd) for double precision computation. This has the potential to yield superior performance compared to the C kernel, particularly when dealing with sizable arrays, as it can execute operations on multiple elements concurrently. Conversely, the dot product function, being implemented in C, may introduce marginally higher overhead due to its scalar nature and the mechanism for invoking functions.

# Testing
We conducted tests with array sizes of 2^20, 2^24, and 2^28, but unfortunately, we were unable to proceed with the 2^30 size due to its exceeding the capacity of my machine.

# Results: C and x86-64 assembly Debug and Release 
After conducting the testing, we were able to produce matching results (for both the C and ASM file) with array sizes of 2^20, 2^24, and 2^28. And a confirmation of mismatch results in our error checking. Resutlts are as follows below:

# Error Checking
This is a showcase of our error testing, where a value was altered before conducting the test.
![image](https://github.com/Marcusgb21/LBYARCH-x86-to-C-interface/assets/64012244/5cdac315-f5e6-4742-b08e-f2647817babc)

# DEBUG 2^20
![image](https://github.com/Marcusgb21/LBYARCH-x86-to-C-interface/assets/64012244/9b5796e0-f437-4fdd-9d5f-0a192d7bbbb5)


# RELEASE 2^20
![image](https://github.com/Marcusgb21/LBYARCH-x86-to-C-interface/assets/64012244/20048e17-556e-4828-a99c-67035081afcf)


# DEBUG 2^24
![image](https://github.com/Marcusgb21/LBYARCH-x86-to-C-interface/assets/64012244/8af07655-5f4b-41ad-a1c7-812a791df15d)


# RELEASE 2^24
![image](https://github.com/Marcusgb21/LBYARCH-x86-to-C-interface/assets/64012244/8dbe9dfe-48bc-4c3b-aa2a-f8f128a4c1b6)


# DEBUG 2^28
![image](https://github.com/Marcusgb21/LBYARCH-x86-to-C-interface/assets/64012244/ba6af02b-79af-4ffe-b5da-f5e4ebaf84a7)


# RELEASE 2^28
![image](https://github.com/Marcusgb21/LBYARCH-x86-to-C-interface/assets/64012244/a3019521-c54e-4bad-b8de-6d7578c89bc7)

# Comparative Results
To add...

# Analysis of Results
To add...








