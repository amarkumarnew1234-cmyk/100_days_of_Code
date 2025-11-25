//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/

#include<stdio.h>
int main(){
    int count,num,num_cp,digit;
    printf("Enter number:");
    scanf("%d",&num);
    num_cp=num;
    for(count=0;num_cp>0;count++){
        num_cp/=10;
    }
    int freq[10]={0};
    for(int i=0;i<count;i++){
        digit=num%10;
        freq[digit]++;
        num/=10;
    }
    int max_freq=-1;
    digit = 0;
    for(int i=0;i<10;i++){
        if(freq[i]>max_freq){
            max_freq=freq[i];
            digit=i;
        }
    }
    printf("%d",digit);
    return 0;
}