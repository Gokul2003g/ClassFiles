#include<stdio.h>

struct student {
    int rollno;
    float marks;
} D;

void display() {
    printf("%d\n", D.rollno);
    printf("%f\n", D.marks);
}

void main() {
    D.marks = 99;
    D.rollno = 18;
    display();
}