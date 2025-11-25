// Q82: Print each character of a string on a new line.

/*
Sample Test Cases:
Input 1:
Hi
Output 1:
H
i

*/

#include<stdio.h>
int main(){
    printf("Enter string:");
    char str[20];
    fgets(str, sizeof(str), stdin);
    int count=0;
    while(str[count]!='\0'&&str[count]!='\n'){
        printf("%c",str[count]);
        printf("\n");
        count++;
    }
    return 0;
}