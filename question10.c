//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include<stdio.h>
int main(){
int s,h,m;
printf("Enter seconds:");
scanf("%d",&s);
h=s/3600;
s=s%3600;
m=s/60;
s=s%60;
printf("Time is %d:%d:%d",h,m,s);
return 0;
}