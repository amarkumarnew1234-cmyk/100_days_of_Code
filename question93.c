// Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/

#include<stdio.h>
#include<string.h>
int main(){
    char str1[20],str2[20];
    printf("Enter first string:");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string:");
    fgets(str2, sizeof(str2), stdin);
    int count1=strlen(str1),count2=strlen(str2);
    int freq1[26]={0},freq2[26]={0};
    int index,var=1;
    for(int i=0;i<count1;i++){
        if(str1[i]>='A'&&str1[i]<='Z'){
            str1[i]=str1[i]+32;
        }
        if(str1[i]>='a'&&str1[i]<='z'){
            index=str1[i]-'a';
            freq1[index]++;
        }
    }
    for(int i=0;i<count2;i++){
        if(str2[i]>='A'&&str2[i]<='Z'){
            str2[i]=str2[i]+32;
        }
        if(str2[i]>='a'&&str2[i]<='z'){
            index=str2[i]-'a';
            freq2[index]++;
        }
    }
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            var=0;
            break;
        }
    }
    if(var){
        printf("Anagrams");
    }
    else{
        printf("Not Anagrams");
    }
    return 0;
}