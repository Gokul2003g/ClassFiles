#include<stdio.h>
// Gokul
struct ComplexNums {
    float real;
    float imaginary;
}C[10];

void main() {

    float sumReal, sumImaginary; 
    for (int i = 0; i < 10; i++) {
        printf("Enter the real and imaginary value for %d number: ", i+1);
        scanf(" %f %f", &C[i].real, &C[i].imaginary);
        sumReal += C[i].real;
        sumImaginary += C[i].imaginary;
    
    }
    printf("Sum is equal to (%.2f) + i(%.2f)", sumReal, sumImaginary);
}