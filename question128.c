//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/


#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("text.txt","r");
    if(fp==NULL){
        printf("File Error");
        return 0;
    }
    else{
        char arr[]={'a','e','i','o','u','A','E','I','O','U'};
        int vowels=0,consonants=0,notV=1;
        while (1) {
            char c=fgetc(fp);
            if(c==EOF){
                break;
            }
            for(int i=0;i<10;i++){
                if(c==arr[i]){
                    vowels++;
                    notV=0;
                    break;
                }
            }
            if(((c>='a'&&c<='z')||(c>='A'&&c<='Z'))&&notV){
                consonants++;
            }
            notV=1;
        }    
        printf("Vowels: %d\nConsonants: %d",vowels,consonants);
    }
    fclose(fp);
    return 0;
}