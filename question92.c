// Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[20],temp;
    fgets(str, sizeof(str), stdin);
    int count=strlen(str),result=0,freq[26]={0};
    for(int i=0;i<count-1;i++){
        temp=str[i];
        if(temp>=65&&temp<=90){
            temp+=32;
        }
        freq[temp-'a']++;
        if(freq[temp-'a']==2){
            printf("%c",str[i]);
            result=1;
            break;
        }
    }
    if(!result){
       printf("\n");
    }
    return 0;
}