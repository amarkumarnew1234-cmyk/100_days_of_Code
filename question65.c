//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/


#include<stdio.h>
int main(){
    int count,search,var=1,start=0,end;
    printf("Enter number of elements:");
    scanf("%d",&count);
    int arr[count];
    end=count-1;
    printf("Enter Sorted Elements:\n");
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    printf("Which element to search:");
    scanf("%d",&search);
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==search){
            var=0;
            printf("Found at index %d",mid);
            break;
        }
        else if(arr[mid]>search){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    if(var){
        printf("-1");
    }
    return 0;
}