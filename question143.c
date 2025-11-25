//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

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
    int n;
    scanf("%d",&n);
    struct Student s[n];
    printf("%d Students: ",n);
    enter_details(s,n);
    int max=s[0].marks;
    int index=0;
    for(int i=0;i<n;i++){
        if(max<s[i].marks){
            max=s[i].marks;
            index=i;
        }
    }
    printf("Topper: %s (Marks: %d)",s[index].Name,s[index].marks);
    return 0;
}
void enter_details(struct Student S[],int n){
    for(int i=0;i<n;i++){
        scanf("%s %d %d,",&S[i].Name,&S[i].roll,&S[i].marks);
    }
}