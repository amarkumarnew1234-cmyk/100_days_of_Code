// Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[20],temp;
    fgets(str, sizeof(str), stdin);
    int count=strlen(str);
    for(int i=0;i<((count-1)/2);i++){
        temp=str[i];
        str[i]=str[count-i-2];
        str[count-i-2]=temp;
    }
    printf("%s",str);
    return 0;
}