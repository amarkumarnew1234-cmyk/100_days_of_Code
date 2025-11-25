// Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/

#include<stdio.h>
int main(){
    printf("Enter string:");
    char str[20];
    fgets(str, sizeof(str), stdin);
    int count=0;
    if(str[count]=='\n'){
        printf("1");
        return 0;
    }
    while(str[count]!='\0'&&str[count]!='\n'){
        count++;
    }
    printf("%d",count);
    return 0;
}