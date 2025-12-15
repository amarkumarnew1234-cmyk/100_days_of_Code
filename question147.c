//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/

#include<stdio.h>
#include<stdlib.h>
struct Date{
    int Date;
    int Month;
    int Year;
};
struct Employee{
    char Name[20];
    int ID;
    struct Date date;
};
void enter_details(struct Employee*);
int main(){
    struct Employee e1;
    enter_details(&e1);
    printf("Printing to binary file\n");
    FILE*fp=fopen("Employee.bin","wb");
    if(fp==NULL){
        printf("error in writing file");
        return 1;
    }
    fwrite(&e1,sizeof(struct Employee),1,fp);
    fclose(fp);
    fp=NULL;
    printf("File saved");
    struct Employee e2;
    fp=fopen("Employee.bin","rb");
    if(fp==NULL){
        printf("error in reading file");
        return 1;
    }
    fread(&e2,sizeof(struct Employee),1,fp);
    printf("Name: %s | ID: %d | Joining Date: %d/%d/%d",e2.Name,e2.ID,e2.date.Date,e2.date.Month,e2.date.Year);
    fclose(fp);
    fp=NULL;
    return 0;
}
void enter_details(struct Employee *e){
    scanf("Employee: %s | ID: %d | Joining Date: %d %d %d",&e->Name,&e->ID,&e->date.Date,&e->date.Month,&e->date.Year);
}