//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include<stdio.h>
struct Student
{
    char Name[50];
    int roll;
    int marks;
};
int main(){
    struct Student s1;
    printf("Name: ");
    scanf("%s",&s1.Name);
    printf("Roll: ");
    scanf("%d",&s1.roll);
    printf("Marks: ");
    scanf("%d",&s1.marks);
    printf("Name: %s | Roll: %d | Marks: %d",s1.Name,s1.roll,s1.marks);
    return 0;
}