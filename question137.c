//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/

#include<stdio.h>
#include<string.h>
enum ROLE {
    ADMIN,
    USER,
    GUEST
};
int main(){
    char s[10];
    printf("Enter Role:");
    scanf("%s",&s);
    enum ROLE role;
    if(strcmp(s,"ADMIN")==0){
        role=ADMIN;
    }
    else if(strcmp(s,"USER")==0){
        role=USER;
    }
    else if(strcmp(s,"GUEST")==0){
        role=GUEST;
    }
    else{
        printf("Invalid input");
        return 0;
    }
    switch (role){
    case 0:
        printf("Welcome Admin!");
        break;
    case 1:
        printf("Welcome User!");
        break;
    case 2:
        printf("Welcome Guest!");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}