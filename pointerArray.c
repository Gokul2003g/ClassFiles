#include<stdio.h>

int add(int, int);

void main() {
    int c=2,d=3,g;
    int (*func)(int, int) = add;

    g=add(c,d);
    printf("%d\n",g);
    g=(*func)(c,d);
    printf("%d\n", g);
    printf("%p\n", add);
}

int add (int a, int b) {
    return a+b;
}