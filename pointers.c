#include <stdio.h>

//void main() {
//    char n;
//    n = 'g';
//    char *ptr = &n;
//    printf("%c", n);
//    printf("\n%c",*ptr);
//    printf("\n%p",&n);
//    printf("\n%p",ptr);
//    printf("\n%p",ptr++);
//    printf("\n%p",++ptr);
//    
//    
//}

// void main() {
//     int a[2];
//     for (int i = 0; i < 2; i++) {
//         scanf("%d", (a+i));
//     }
//     for (int i = 0; i < 2; i++) {
//         printf("%p\n", (a+i));
//         printf("%d\n", *(a+i));
//     }
// } 

// void main() {
//     int b[2][3] = {
//                 {4,5,6}, 
//                 {7,8,9}
         
         
//                 };
//     for (int i=0; i<2; i++) {
//         for (int j=0; j<3; j++) {
//             printf("%p\n", (*(b+i)+j));
//             printf("%d\n", *(*(b+i)+j));
//         }
//     }
// }
void mul(int *c) {
    for (int i = 0; i < 2; i++) {
        c[i] = 2*c[i];
    }
    
}

void main() {
    int a[2] = {1,2};
    // int b[2][3] = {
    //             {4,5,6}, 
    //             {7,8,9}         
    //             };
    
    // int (*q)[3];
    // q = b;
    printf("%p\n", &a[0]);
    printf("%p\n", &a[1]);
    printf("%p\n", a);
    mul(a);
    
    

    
/*
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("%p\n", (*(q+i)+j));
            printf("%d\n", *(*(q+i)+j));
        }
    }*/
}