//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/

#include<stdio.h>
int main(){
    char name[50];
    printf("Enter Name: ");
    fgets(name, sizeof(name), stdin);
    char age[3];
    printf("Enter Age: ");
    fgets(age, sizeof(age), stdin);
    FILE *fp;
    fp=fopen("info.txt","w");
    if(fp==NULL){
        printf("File Error");
        return 0;
    }
    else{
        fprintf(fp,"Name: %sAge: %s",name,age);
        printf("File created successfully! Data written to info.txt");
    }
    fclose(fp);
    return 0;
}