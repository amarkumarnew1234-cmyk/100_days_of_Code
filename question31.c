//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include<stdio.h>
int main(){
int n,b[32],i=0,j;
printf("Enter no. for converting to binary");
scanf("%d",&n);
if(n==0){
printf("0");
return 0;
}
while(n>0){
b[i]=n%2;
n/=2;
i++;
}
for(j=i-1;j>=0;j--)
printf("%d",b[j]);
return 0;
}
