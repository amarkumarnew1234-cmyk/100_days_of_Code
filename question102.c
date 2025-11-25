//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include<stdio.h>
int main(){
    int count;
    printf("Enter how many numbers:");
    scanf("%d",&count);
    int nums[count];
    for(int i=0;i<count;i++){
        scanf("%d",&nums[i]);
    }
    int x;
    printf("Enter x:");
    scanf("%d",&x);
    int result=-1;
    int start = 0, end = count - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] >= x) {
            result = mid;
            end = mid - 1;
        } 
        else {
            start = mid + 1;
        }
    }
    printf("%d",result);
    return 0;
}