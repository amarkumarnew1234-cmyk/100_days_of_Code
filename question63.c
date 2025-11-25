//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/

#include<stdio.h>
int main(){
    int count;
    printf("Enter number of elements:");
    scanf("%d",&count);
    int arr[count];
    printf("Enter Elements:\n");
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    int count1;
    printf("Enter number of elements:");
    scanf("%d",&count1);
    int arr1[count1];
    printf("Enter Elements:\n");
    for(int i=0;i<count1;i++){
        scanf("%d",&arr1[i]);
    }
    arr[count+count1];
    for(int i=0;i<count1;i++){
        arr[count+i]=arr1[i];
    }
    for(int i=0;i<count1+count;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}