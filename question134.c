//Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include<stdio.h>
#include<string.h>
enum RESULT {
    SUCCESS,
    TIMEOUT,
    FAILURE
};
int main(){
    char s[10];
    printf("Enter result:");
    scanf("%s",&s);
    enum RESULT result;
    if(strcmp(s,"SUCCESS")==0){
        result=SUCCESS;
    }
    else if(strcmp(s,"FAILURE")==0){
        result=FAILURE;
    }
    else if(strcmp(s,"TIMEOUT")==0){
        result=TIMEOUT;
    }
    else{
        printf("Invalid input");
        return 0;
    }
    switch (result){
    case 0:
        printf("Operation Success");
        break;
    case 1:
        printf("Operation TimeOut");
        break;
    case 2:
        printf("Operation failed");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}