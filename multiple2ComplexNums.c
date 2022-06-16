#include<stdio.h>
#include<string.h>

struct complexNums {
    float real;
    float imaginary;
}C[2];

void main() {
    
    float realPart, imaginaryPart;

    for (int i = 0; i < 2; i++) {
        printf("Enter the real and imaginary value for %d number: ", i);
        scanf(" %f %f", &C[i].real, &C[i].imaginary);
    }

    realPart = (C[0].real*C[1].real - C[0].imaginary*C[1].imaginary);
    imaginaryPart = (C[0].imaginary*C[1].real + C[0].real*C[1].imaginary);

    printf("Product is (%.2f) + i(%.2f)", realPart, imaginaryPart);
}