//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/

#include<stdio.h>
int main(){
    char str[200],file[100];
    FILE *fp;
    printf("Enter filename:");
    fgets(file,200,stdin);
    for(int i=0;i<100;i++){
        if(file[i]=='\n'){
            file[i]='\0';
        }
    }
    fp=fopen(file,"r");
    if(fp==NULL){
        printf("Error: File does not exist!");
        return 0;
    }
    else{
        printf("File opened successfully.\n");
        while (fgets(str,sizeof(str), fp) != NULL) {
            printf("%s",str);
        }
    }
    fclose(fp);
    return 0;
}