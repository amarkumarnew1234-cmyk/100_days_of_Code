//Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/

#include<stdio.h>
int main(){
    int count,insert,pos=0;
    printf("Enter number of elements:");
    scanf("%d",&count);
    int arr[count+1];
    printf("Enter Sorted Elements:\n");
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter which element to insert:\n");
    scanf("%d",&insert);
    for(;pos<count&&arr[pos]<insert;pos++){
    }
    for(int i=count;i>pos;i--){
        arr[i] = arr[i-1];
    }
    arr[pos]=insert;
    for(int i=0;i<count+1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}