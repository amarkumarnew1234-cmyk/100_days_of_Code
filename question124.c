//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/

#include<stdio.h>
int main(){
    char source[100],destination[100];
    FILE *fpr,*fpw;
    printf("Enter Source file name:");
    fgets(source,sizeof(source),stdin);
    printf("Enter Destination file name:");
    fgets(destination,sizeof(destination),stdin);
    for(int i=0;i<100;i++){
        if(source[i]=='\n'){
            source[i]='\0';
        }
        if(destination[i]=='\n'){
            destination[i]='\0';
        }
    }
    fpr=fopen(source,"r");
    fpw=fopen(destination,"w");
    if(fpr==NULL||fpw==NULL){
        printf("File Error");
        return 0;
    }
    else{
        int index=0;
        while (1) {
            char c=fgetc(fpr);
            if(c==EOF){
                break;
            }
            fputc(c,fpw);
        }
        printf("File copied successfully to %s",destination);    
    }
    fclose(fpr);
    fclose(fpw);
    return 0;
}