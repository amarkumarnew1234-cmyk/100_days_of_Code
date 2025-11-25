//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/

#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    printf("Enter String:");
    fgets(s,50,stdin);
    int n=strlen(s)-1;
    int count=0,temp[50],var=1,maxlen=-1;
    for(int i=0;i<n;i++){
        for(int j=0;j<count;j++){
            if(s[i]==temp[j]){
                var=0;
                break;
            }
        }
        if(var){
            temp[count++]=s[i];
        }
        else{
            for(int j=0;j<count;j++){
                temp[j]=' ';
            }
            if(maxlen<count){
                maxlen=count;
            }
            count=0;
        }
        var=1;
    }
    if(maxlen<count){
        maxlen=count;
    }
    printf("%d",maxlen);
    return 0;
}