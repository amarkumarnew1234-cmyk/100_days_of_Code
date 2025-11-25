// Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include<stdio.h>
#include<string.h>
struct Word{
    int start;
    int length;
    int end;
};
int main(){
    printf("Enter string:");
    char str[40];
    fgets(str, sizeof(str), stdin);
    int count=strlen(str),index=0,var,max=0;
    struct Word word[20];
    for(int i=0;i<count;i++){
        word[index].start=i;
        word[index].length=0;
        for(;str[i]!=32&&str[i]!='\0'&&str[i]!='\n';i++){
            word[index].length++;
        }
        word[index].end=i;
        if(max<word[index].length){
            max=word[index].length;
            var=index;
        }
        index++;
    }
    for(int j=word[var].start;j<word[var].end;j++){
        printf("%c",str[j]);
    }
    return 0;
}