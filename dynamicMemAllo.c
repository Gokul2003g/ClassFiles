#include<stdio.h>
#include<stdlib.h>

void main() {
    int *ptr, i, n;
    ptr=(int *)malloc(n*sizeof(int));

    for (i=0;i<2;i++) {
        scanf("%d", (ptr+i));
        printf("%d", *(ptr+i));
    }
}