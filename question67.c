//Q67: Insert an element in an array at a given position.

/*
Sample Test Cases:
Input 1:
4
10 20 30 40
2 15
Output 1:
10 20 15 30 40

*/

#include<stdio.h>
int main(){
    int count,insert,pos=0;
    printf("Enter number of elements:");
    scanf("%d",&count);
    int arr[count+1];
    printf("Enter Elements:\n");
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter index where to enter:");
    scanf("%d",&pos);
    printf("Enter which element to insert:\n");
    scanf("%d",&insert);
    
    for(int i=count;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos]=insert;
    for(int i=0;i<count+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}