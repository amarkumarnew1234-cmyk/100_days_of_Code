// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025
*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter date:");
    char date[50];
    fgets(date, sizeof(date), stdin);
    int count=strlen(date);
    for(int j=count-1;j>=5;j--){
        date[j]=date[j-1];
    }
    date[3]='A';
    date[4]='p';
    date[5]='r';
    for (int i=0;i<count;i++){
        if(date[i]=='/'){
            date[i]='-';
        } 
    }
    printf("%s",date);
    return 0;
}