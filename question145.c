//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/

#include<stdio.h>
#include<string.h>
struct Student
{
    char Name[50];
    int roll;
    int marks;
};
void enter_details(struct Student S[],int n);
struct Student get_topper(struct Student S[],int n);
int main(){
    int n;
    scanf("%d",&n);
    struct Student s[n];
    printf("%d Students: ",n);
    enter_details(s,n);
    struct Student Topper;
    Topper=get_topper(s,n);
    printf("Top Student: %s | Roll: %d | Marks: %d",Topper.Name,Topper.roll,Topper.marks);
    return 0;
}
void enter_details(struct Student S[],int n){
    for(int i=0;i<n;i++){
        scanf("%s %d %d,",&S[i].Name,&S[i].roll,&S[i].marks);
    }
}
struct Student get_topper(struct Student S[],int n){
    struct Student topper;
    int max=S[0].marks;
    int index=0;
    for(int i=0;i<n;i++){
        if(max<S[i].marks){
            max=S[i].marks;
            index=i;
        }
    }
    strcpy(topper.Name,S[index].Name);
    topper.marks=S[index].marks;
    topper.roll=S[index].roll;
    return topper;
}