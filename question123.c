//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/

#include<stdio.h>
#include<string.h>
int main(){
    char str[200];
    FILE *fp;
    fp=fopen("sample.txt","r");
    if(fp==NULL){
        printf("File Error");
        return 0;
    }
    else{
        int charac=0,words=0,lines=0;
        while (fgets(str,sizeof(str), fp) != NULL) {
            lines++;
            for(int i=0;str[i]!='\0';i++){
                printf("%c ",str[i]);
                charac++;
                if((i==0||str[i-1]==' '||str[i-1]=='\n')&&(str[i]!=' '&&str[i]!='\n'&&str[i]!='\0')){
                    words++;
                }
            }
        }
        printf("Characters: %d\nWords: %d\nLines: %d",charac,words,lines);
    }
    fclose(fp);
    return 0;
}