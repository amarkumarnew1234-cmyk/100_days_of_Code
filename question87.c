// Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[20],temp;
    int spaces=0,digits=0,special=0;
    fgets(str, sizeof(str), stdin);
    int count=strlen(str);
    for(int i=0;i<count;i++){
        temp=str[i];
        if(temp>=32&&temp<127){
            if(temp==32){
                spaces++;
            }
            else if(temp>=48&&temp<=57){
                digits++;
            }
            else if((temp<65||temp>90)&&(temp<97||temp>122)){
                special++;
            }
        }
    }
    printf("Spaces=%d, Digits=%d, Special=%d",spaces,digits,special);
    return 0;
}