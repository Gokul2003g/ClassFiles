#include<stdio.h>
#include<stdlib.h>

int main(int ar, char *arg[]) {
    printf("%d\n", ar);
    printf("%s\n", arg[0]);
    printf("%s\n", arg[1]);
    printf("%d\n", atoi(arg[2]));
    printf("%f\n",atof(arg[3]));

    return 0;
}