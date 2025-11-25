// Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[50];
    fgets(str, sizeof(str), stdin);
    int count=strlen(str),i;
    for(i=count-2;str[i]!=' ';i--);
    for (int j=0;j<i;j++){
        if (j==0||(str[j-1]==' '&&((str[j]>='A'&&str[j]<='Z')||(str[j]>='a'&&str[j]<='z')))){
            printf("%c.",str[j]);
        }
    }
    for(int j=i;j<count;j++){
        printf("%c",str[j]);
    }

    return 0;
}