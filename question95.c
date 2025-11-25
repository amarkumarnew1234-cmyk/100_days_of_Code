// Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/

#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20],temp;
    printf("Enter first string:");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string:");
    fgets(str2, sizeof(str2), stdin);
    int count1=strlen(str1),count2=strlen(str2);
    int var=0;
    if(count1==count2){
        for(int i=count1-2;i>-1;i--){
            temp=str1[count1-2];
            for(int j=count1-2;j>0;j--){
                str1[j]=str1[j-1];
            }
            str1[0]=temp;
            if(strcmp(str1,str2)==0){
                var=1;
                break;
            }
        }
    }
    if(var){
        printf("Rotation");
    }
    else{
        printf("Not Rotation");
    }
    return 0;
}