//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/

#include<stdio.h>
struct Student{
    char name[50];
    int roll;
    int marks;
};
int main(){
    struct Student s[20];
    for(int i=0;i<2;i++){
        printf("Enter roll no. of Student %d: ",i+1);
        scanf("%d",&s[i].roll);
        printf("Enter name of Student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter marks of Student %d: ",i+1);
        scanf("%d",&s[i].marks);
    }
    FILE *fp;
    fp=fopen("students.txt","w");
    if(fp==NULL){
        printf("File Error");
        return 0;
    }
    else{
        for(int i=0;i<2;i++){
            fprintf(fp,"%s %d %d\n",s[i].name,s[i].roll,s[i].marks);
        }
        fclose(fp);
        fp=fopen("students.txt","r");
        if(fp==NULL){
            printf("File Error");
            return 0;
        }
        else{
            char c;
        while (1) {
            char c=fgetc(fp);
            if(c==EOF){
                break;
            }
            printf("%c",c);
            if(c==' '){
                printf("| ");
            }
        }
        }
    }
    fclose(fp);
 
    return 0;
}