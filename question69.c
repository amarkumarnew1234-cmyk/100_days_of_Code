//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/

#include<stdio.h>
int main(){
    int count,temp;
    printf("Enter number of elements:");
    scanf("%d",&count);
    int arr[count];
    printf("Enter Elements:");
    for(int i=0;i<count;i++){
        scanf(" %d",&arr[i]);
    }

    for(int i=0;i<count-1;i++){
        for(int j=0;j<count-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int second = -1;
    for(int i=1;i<count;i++){
        if(arr[i] != arr[0]){
            second = arr[i];
            break;
        }
    }

    if(second == -1){
        printf("No second largest element exists");
    } else {
        printf("%d", second);
    }

    return 0;
}