#include<stdio.h>
#include<string.h>

/* Create a structure called student_enrollment with members as Student name, Roll no, Dept name,
 Date of joining as struct DOJ which contains three members Date/Month/Year and Fee_paid as char 
 (possible inputs can be Y or N. Create array of structure reading 'n' student details from the user.

 Perform the following functionalities:
 
 1. Display the number of students enrolled in the department name {Get the department name as input from user)
 2. Display the students details of who joined after July 2013 and not paid the fee.
 */

int n;

struct DOJ {
        int date, month, year;
        char fee_paid;
    };

struct student_enrollment {
    char name[20];
    int rollno;
    char deptname[10];
    struct DOJ d;
};

void main() {
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct student_enrollment s[n];

    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf(" %s", s[i].name);
        
        printf("Enter the Roll number of student %d: ", i+1);
        scanf(" %d", &s[i].rollno);
        
        printf("Enter the Dept name of student %d: ", i+1);
        scanf(" %s", s[i].deptname);

        printf("Enter the date month and year leaving a space in between for student %d: ", i+1);
        scanf(" %d %d %d", &s[i].d.date, &s[i].d.month, &s[i].d.year);

        printf("Enter whether fees paid or not [Y or N] for student %d: ",i+1);
        scanf(" %c", &s[i].d.fee_paid);
    }

    char nameOfDept[10];
    printf("Enter the department name you want: ");
    scanf(" %s", nameOfDept);

    int countForDeptName = 0;

    for (int i = 0; i < n; i++) {
        if (strcmp(nameOfDept, s[i].deptname) == 0) {
            countForDeptName++;
        }        
    }
    printf("The number of students who are in %s are : %d\n.",nameOfDept, countForDeptName);

    for (int i = 0; i < n; i++) {
        if (s[i].d.month > 6) {
            if (s[i].d.year > 2013 && s[i].d.fee_paid == 'n') {
                printf("Name of student: %s.\n", s[i].name);
                printf("Roll number of student: %d\n", s[i].rollno);
                printf("Dept name of student %s: %s\n", s[i].name, s[i].deptname);
            }
        }
    }

}