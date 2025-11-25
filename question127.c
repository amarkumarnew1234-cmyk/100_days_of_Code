//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/

#include<stdio.h>
int main(){
    FILE *fpr,*fpw;
    fpr=fopen("input.txt","r");
    fpw=fopen("output.txt","w");
    if(fpr==NULL||fpw==NULL){
        printf("File Error");
        return 0;
    }
    else{
        while (1) {
            char c=fgetc(fpr);
            if(c==EOF){
                break;
            }
            if(c>='a'&&c<='z'){
                c=c-32;
            }
            fputc(c,fpw);
        }    
    }
    fclose(fpr);
    fclose(fpw);
    return 0;
}