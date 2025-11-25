// Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/

#include<stdio.h>
int main(){
    printf("Enter string:");
    char str[20];
    fgets(str, sizeof(str), stdin);
    int vowels_no=0,Consonants_no=0,count=0,var=1;
    char vowels[]={'a','e','i','o','u','A','E','I','O','U'};
    while(str[count]!='\0'&&str[count]!='\n'){
        var=1;
        for(int i=0;i<10;i++){
            if(vowels[i]==str[count]){
                vowels_no++;
                var=0;
                break;
            }
        }
        if(var&& ((str[count]>='a'&&str[count]<='z')||(str[count]>='A'&&str[count]<='Z'))){
            Consonants_no++;
        }
        count++;
    }
    printf("Vowels=%d, Consonants=%d",vowels_no,Consonants_no);
    return 0;
}