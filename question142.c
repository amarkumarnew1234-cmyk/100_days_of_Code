//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/

#include<stdio.h>
struct Student
{
    char Name[50];
    int roll;
    int marks;
};
void enter_details(struct Student S[],int n);
int main(){
    struct Student s[5];
    enter_details(s,5);
    printf("  Name  | Roll  | Marks \n");
    for(int i=0;i<5;i++){
        printf("%5s   | %3d   | %3d\n",s[i].Name,s[i].roll,s[i].marks);
    }
    return 0;
}
void enter_details(struct Student S[],int n){
    for(int i=0;i<n;i++){
        printf("Name: ");
        scanf("%s",&S[i].Name);
        printf("Roll: ");
        scanf("%d",&S[i].roll);
        printf("Marks: ");
        scanf("%d",&S[i].marks);
    }
}