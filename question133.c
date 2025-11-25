//Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/


#include<stdio.h>
#include<string.h>
enum Month {
    JAN,
    FEB,
    MAR,
    APR,
    MAY,
    JUN,
    JUL,
    AUG,
    SEP,
    OCT,
    NOV,
    DEC
};
int main(){
    char s[5];
    printf("Enter Month:");
    scanf("%s",&s);
    enum Month month;
    if(strcmp(s,"JAN")==0){
        month=JAN;
    }
    else if(strcmp(s,"FEB")==0){
        month=FEB;
    }
    else if(strcmp(s,"MAR")==0){
        month=MAR;
    }
    else if(strcmp(s,"APR")==0){
        month=APR;
    }
    else if(strcmp(s,"MAY")==0){
        month=MAY;
    }
    else if(strcmp(s,"JUN")==0){
        month=JUN;
    }
    else if(strcmp(s,"JUL")==0){
        month=JUL;
    }
    else if(strcmp(s,"AUG")==0){
        month=AUG;
    }
    else if(strcmp(s,"SEP")==0){
        month=SEP;
    }
    else if(strcmp(s,"OCT")==0){
        month=OCT;
    }
    else if(strcmp(s,"NOV")==0){
        month=NOV;
    }
    else if(strcmp(s,"DEC")==0){
        month=DEC;
    }
    else {
        printf("Invalid Input");
        return 0;
    }
    switch (month){
    case 0:
        printf("31 days");
        break;
    case 1:
        printf("28 or 29 days");
        break;
    case 2:
        printf("31 days");
        break;
    case 3:
        printf("30 days");
        break;
    case 4:
        printf("31 days");
        break;
    case 5:
        printf("30 days");
        break;
    case 6:
        printf("31 days");
        break;
    case 7:
        printf("31 days");
        break;
    case 8:
        printf("30 days");
        break;
    case 9:
        printf("31 days");
        break;
    case 10:
        printf("30 days");
        break;
    case 11:
        printf("31 days");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}