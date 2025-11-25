//Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

*/

#include<stdio.h>
struct Student
{
    char Name[50];
    int roll;
    int marks;
};
void print_structure(struct Student);
int main(){
    struct Student s1;
    printf("Student: ");
    scanf("%s %d %d",&s1.Name,&s1.roll,&s1.marks);
    print_structure(s1);
    return 0;
}
void print_structure(struct Student s){
    printf("Name: %s | Roll: %d | Marks: %d",s.Name,s.roll,s.marks);
}