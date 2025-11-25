//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/

#include<stdio.h>
#include<string.h>
int main(){
    char s[50];
    printf("Enter first String:");
    fgets(s,50,stdin);
    char t[50];
    printf("Enter Second String:");
    fgets(t,50,stdin);
    int ns=strlen(s),nt=strlen(t),freqs[26],freqt[26],var=1;
    for(int i=0;i<26;i++){
        freqs[i]=0;
        freqt[i]=0;
    }
    if(ns==nt){
        for(int i=0;i<ns&&s[i]!='\n'&&t[i]!='\n';i++){
            freqs[s[i]-'a']++;
            freqt[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freqs[i]!=freqt[i]){
                var=0;
                break;
            }
        }
    }
    else{
        var=0;
    }
    if(var){
        printf("Anagram");
    }
    else{
        printf("Not Anagram");
    }
    return 0;
}