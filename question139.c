//Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/

#include<stdio.h>
#include<string.h>
enum RESULT {
    SUCCESS,
    TIMEOUT,
    FAILURE
};
int main(){
    char *s[]={"SUCCESS","TIMEOUT","FAILURE"};
    for(int i=SUCCESS;i<=FAILURE;i++){
        if(i!=0)printf(" ");
        printf("%s=%d",s[i],i);
        if(i!=2)printf(",");
    }
    return 0;
}