//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
int main(){
int num,i,flag=0;
printf("Enter number: ");
scanf("%d",&num);
if(num<=1)
flag=1;
for(i=2;i*i<=num;i++)
if(num%i==0)
flag=1;
if(flag==0)
printf("Prime");
else
printf("Not prime");
return 0;
}
