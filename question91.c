// Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[20],temp;
    fgets(str, sizeof(str), stdin);
    int count=strlen(str),index=0,var=1;
    int arr[]={65,69,73,79,85,97,101,105,111,117};
    for(int i=0;i<count;i++){
        temp=str[i];
        if((temp>=65&&temp<=90)||(temp>=97&&temp<=122)){
            for(int j=0;j<10;j++){
                if(str[i]==arr[j]){
                    var=0;
                    break;
                }
            }
            if(var){
                str[index++]=str[i];
            }
        }
        var=1;
    }
    str[index]='\0';
    printf("%s",str);
    return 0;
}