//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include<stdio.h>
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
    printf("Name: %s | ID: %d | Joining Date: %d/%d/%d",e1.Name,e1.ID,e1.date.Date,e1.date.Month,e1.date.Year);
    return 0;
}
void enter_details(struct Employee *e){
    scanf("Employee: %s | ID: %d | Joining Date: %d %d %d",&e->Name,&e->ID,&e->date.Date,&e->date.Month,&e->date.Year);
}