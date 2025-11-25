//Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/


#include<stdio.h>
#include<string.h>
enum Light_color {
    RED,
    YELLOW,
    GREEN
};
int main(){
    char s[6];
    printf("Enter Color:");
    scanf("%s",&s);
    enum Light_color color;
    if(strcmp(s,"RED")==0){
        color=RED;
    }
    else if(strcmp(s,"YELLOW")==0){
        color=YELLOW;
    }
    else if(strcmp(s,"GREEN")==0){
        color=GREEN;
    }
    switch (color){
    case 0:
        printf("Stop");
        break;
    case 1:
        printf("Wait");
        break;
    case 2:
        printf("Go");
        break;
    default:
        printf("Invalid Input");
        break;
    }
    return 0;
}