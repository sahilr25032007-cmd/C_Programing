#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student {
    char name[50];
    int age;
    unsigned long mobile;
    };
    int main() {
    struct student *st1;
    st1 = (struct student *)malloc(sizeof(struct student));
    
    printf("Enter the student name: ");
    fgets(st1->name, 40, stdin);
    
    printf("Enter the student age: ");
    scanf("%d", &st1->age);
    
    printf("Enter the student mobile number: ");
    scanf("%lu", &st1->mobile);
    printf("\nStudent Details:\n");
    printf("Student Name: %s", st1->name);
    
    printf("Student Age: %d\n", st1->age);
    
    printf("The student Mobile: %lu\n", st1->mobile);
    
    return 0;
}