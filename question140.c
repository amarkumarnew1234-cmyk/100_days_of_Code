//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/

#include<stdio.h>
#include<string.h>
enum Gender{
    MALE,
    FEMALE
};
struct Person{
    enum Gender gender;
};
int main(){
    char input[6];
    printf("Gender=");
    scanf("%s",input);
    struct Person p;
    if(strcmp(input,"MALE")==0){
        p.gender=MALE;
    }
    else if (strcmp(input,"FEMALE")==0){
        p.gender=FEMALE;
    }
    switch (p.gender){
    case MALE:
        printf("Male");
        break;
    case FEMALE:
        printf("Female");
        break;
    }
    return 0;
}