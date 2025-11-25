//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/

#include<stdio.h>
int main(){
    int count,pos=0,temp;
    printf("Enter number of elements:");
    scanf("%d",&count);
    int arr[count];
    printf("Enter Elements:\n");
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter index where to rotate:");
    scanf("%d",&pos);
    for(int i=0;i<count/2;i++){
        temp=arr[i];
        arr[i]=arr[count-i-1];
        arr[count-i-1]=temp;
    }
    for(int i=0;i<pos/2;i++){
        temp=arr[i];
        arr[i]=arr[pos-1-i];
        arr[pos-1-i]=temp;
    }
    for(int i=0;i<(count-pos)/2;i++){
        temp=arr[pos+i];
        arr[pos+i]=arr[count-1-i];
        arr[count-1-i]=temp;
    }
    for(int i=0;i<count;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}