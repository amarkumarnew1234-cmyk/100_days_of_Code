//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    printf("Enter k:");
    scanf("%d",&k);
    int num,temp=arr[0];
    for(int i=0;i<n;i++){
        if(temp>arr[i]){
            temp=arr[i];
        }
    }
    for(int i=1;i<k;i++){
        num=arr[0];
        for(int j=0;j<n;j++){
            if(num>arr[j]&&temp<arr[j]){
                num=arr[j];
            }
        }
        temp=num;
    }
    printf("%d ",num);
    return 0;
}