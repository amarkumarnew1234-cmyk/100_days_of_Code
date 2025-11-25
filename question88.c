// Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[20];
    fgets(str, sizeof(str), stdin);
    int count=strlen(str);
    for(int i=0;i<count;i++){
        if(str[i]==32){
            str[i]='-';
        }
    }
    printf("%s",str);
    return 0;
}