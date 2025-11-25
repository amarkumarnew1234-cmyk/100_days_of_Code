// Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[20];
    fgets(str, sizeof(str), stdin);
    int count=strlen(str);
    for(int i=0;i<count;i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
        else if(str[i]>=97&&str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    printf("%s",str);
    return 0;
}