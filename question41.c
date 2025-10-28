//Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include<stdio.h>
int main(){
int num,first,last,temp,power=1;
printf("Enter number: ");
scanf("%d",&num);
temp=num;
last=num%10;
while(temp>=10){
temp=temp/10;
power=power*10;
}
first=temp;
num=num%power;
num=num/10;
num=last*power+num*10+first;
printf("Swapped number=%d",num);
return 0;
}

