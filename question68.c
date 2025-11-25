//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/

#include<stdio.h>
int main(){
    int count,pos;
    printf("Enter number of elements:");
    scanf("%d",&count);
    int arr[count];
    printf("Enter Elements:\n");
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter index which element to delete:");
    scanf("%d",&pos);
    for(int i=pos;i<count-1;i++){
        arr[i] = arr[i+1];
    }
    for(int i=0;i<count-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}