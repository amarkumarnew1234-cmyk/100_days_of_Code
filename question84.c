// Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include<stdio.h>
int main(){
    printf("Enter string:");
    char str[20];
    fgets(str, sizeof(str), stdin);
    int count=0,temp;
    while(str[count]!='\0'&&str[count]!='\n'){
        temp=str[count];
        temp-=32;
        str[count]=(char)temp;
        count++;
    }
    printf("%s",str);
    return 0;
}