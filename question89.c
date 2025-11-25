// Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[20],ch;
    fgets(str, sizeof(str), stdin);
    int count=strlen(str),freq=0;
    printf("Enter Character:");
    scanf("%c",&ch);
    for(int i=0;i<count;i++){
        if(ch==str[i]){
            freq++;
        }
    }
    printf("%d",freq);
    return 0;
}