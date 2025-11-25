//Q55: Write a program to print all the prime numbers from 1 to n.

/*
Sample Test Cases:
Input 1:
10
Output 1:
2 3 5 7

Input 2:
20
Output 2:
2 3 5 7 11 13 17 19

*/
#include<stdio.h>
int main(){
    int num;
    int factors=0;
    printf("Enter number till you want prime numbers:");
    scanf("%d",&num);
    for(int i=2;i<=num;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                factors++;
            }
        }
        if(factors==2){
            printf("%d ",i);
        }
        factors=0;
    }
    return 0;
}
