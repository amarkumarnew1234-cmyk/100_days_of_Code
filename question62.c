//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
int main(){
    int count,temp;
    printf("Enter number of elements:");
    scanf("%d",&count);
    int arr[count];
    printf("Enter Elements:\n");
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<count/2;i++){
        arr[i]=arr[i]+arr[count-i-1];
        arr[count-i-1]=arr[i]-arr[count-i-1];
        arr[i]=arr[i]-arr[count-i-1];
    }
    for(int i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}