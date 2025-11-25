// Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/

#include<stdio.h>
#include<string.h>
int main(){
    printf("Enter string:");
    char str[50];
    fgets(str, sizeof(str), stdin);
    int count=strlen(str);
    for (int i=0;i<count;i++){
        if (i==0||(str[i-1]==' '&&((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')))){
            printf("%c.",str[i]);
        }
    }
    return 0;
}