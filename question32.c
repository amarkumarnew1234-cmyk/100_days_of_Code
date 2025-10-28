//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main(){
int num,rev=0,digit,original;
printf("Enter no. to check for palindrome:");
scanf("%d",&num);
original=num;
while(num!=0){
digit=num%10;
rev=rev*10+digit;
num/=10;
}
if(rev==original)
printf("Palindrome");
else
printf("Not palindrome");
return 0;
}

