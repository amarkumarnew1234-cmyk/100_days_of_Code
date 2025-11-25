//Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include<stdio.h>
#include<string.h>
enum OPERATION {
    ADD,
    SUBTRACT,
    MULTIPLY
};
int main(){
    char s[10];
    int num1,num2;
    printf("Enter operator and numbers: ");
    scanf("%s %d %d",&s,&num1,&num2);
    enum OPERATION operator;
    if(strcmp(s,"ADD")==0){
       operator=ADD;
    }
    else if(strcmp(s,"SUBTRACT")==0){
       operator=SUBTRACT;
    }
    else if(strcmp(s,"MULTIPLY")==0){
       operator=MULTIPLY;
    }
    else{
        printf("Invalid input");
        return 0;
    }
    switch (operator){
    case 0:
        printf("%d",num1+num2);
        break;
    case 1:
        printf("%d",num1-num2);
        break;
    case 2:
        printf("%d",num1*num2);
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}