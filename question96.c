// Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[40],temp;
    fgets(str, sizeof(str), stdin);
    int count=strlen(str),j=0,end;
    for(int i=0;i<count;i++){
        if(str[i]==' '|| str[i]=='\n' || str[i]=='\0'){
            end=i-1;
            while(j<=end){
                temp=str[j];
                str[j]=str[end];
                str[end]=temp;
                j++;
                end--;
            }
            j=i+1;
        }
    }
    printf("%s",str);
    return 0;
}