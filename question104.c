//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/

#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    int left_sum=0,right_sum,total_sum=0,result=-1;
    total_sum=(n*(n+1))/2;
    for(int i=1;i<=n;i++) {
        right_sum=total_sum-left_sum-i;
        if(left_sum==right_sum) {
            result = i;
            break;
        }
        left_sum+=i;
    }
    printf("%d\n",result);

    //follow up 1
    result=-1;
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        left_sum=(mid*(mid+1))/2;
        right_sum=total_sum-((mid-1)*mid)/2;
        if (left_sum==right_sum) {
            result = mid;
            break;
        } 
        else {
            start = mid + 1;
        }
    }
    printf("%d\n",result);

    //follow up 2
    total_sum = n * (n + 1) / 2;
    int x = (int)sqrt(total_sum);

    if (x * x == total_sum) {
        printf("%d", x);
    } else {
        printf("-1");
    }
    return 0;
}