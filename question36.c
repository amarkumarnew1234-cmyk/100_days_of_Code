//Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1

*/
#include<stdio.h>
int main(){
int num1,num2,i,hcf=1;
printf("Enter two numbers: ");
scanf("%d%d",&num1,&num2);
int min=(num1<num2)?num1:num2;
for(i=1;i<=min;i++)
if(num1%i==0&&num2%i==0)
hcf=i;
printf("H.C.F=%d",hcf);
return 0;
}
