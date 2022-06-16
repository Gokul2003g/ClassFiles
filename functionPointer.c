#include<stdio.h>

float add(int a, int b) {
    return a+b;
}
float mul(int a, int b) {
    return a*b;
}
float sub(int a, int b) {
    return a-b; 
}
float divi(int a, int b) {
    return a / b;
}

void main() {
    int c=2,d=3,op;
    float g;

    float (*func[4])(int, int) = {add, mul, sub, divi};

    printf("Enter the operation number: ");
    scanf("%d", &op);

    g=(*func[op])(c,d);
    printf("%f", g);
}