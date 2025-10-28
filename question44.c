//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include<stdio.h>
int main(){
int n,i;float sum=0,num=1,den=1;
printf("Enter number of terms: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
if(i==1){
sum+=num;}
else
{num+=2;den+=2;sum+=num/den;}
}
printf("Approximate sum: %.1f",sum);
return 0;
}

