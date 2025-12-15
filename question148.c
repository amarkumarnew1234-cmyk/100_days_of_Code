//Q148: Take two structs as input and check if they are identical.

/*
Sample Test Cases:
Input 1:
Student1: Asha 101 90
Student2: Asha 101 90
Output 1:
Same

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
int compare_details(struct Student S[]);

int main(){
    struct Student s[2];
    enter_details(s,2);
    if(compare_details(s)==0)
        printf("Same");
    else
        printf("Different");
    return 0;
}

void enter_details(struct Student S[],int n){
    for(int i=0;i<n;i++){
        printf("Student%d : ",i+1);
        scanf("%s %d %d",&S[i].Name,&S[i].roll,&S[i].marks);
    }
}

int compare_details(struct Student S[]){
    if(S[0].roll==S[1].roll){
        if(S[0].marks==S[1].marks){
            if(strcmp(S[0].Name,S[1].Name)==0){
                return 0;
            }
            else
                return 1;
        }
        else
            return 1;
    }
    else
        return 1;
}