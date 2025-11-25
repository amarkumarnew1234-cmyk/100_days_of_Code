// Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[20],var=1;
    fgets(str, sizeof(str), stdin);
    int count=strlen(str);
    for(int i=0;i<((count-1)/2);i++){
        if(str[i]!=str[count-i-2]){
            var=0;
            break;
        }
    }
    if(var){
        printf("Palindrome");
    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}