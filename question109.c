//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

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
    printf("Enter array size:");
    scanf("%d",&k);
    int max=0;
    for(int i=0;i<=n-k;i++){
        int sum=0;
        for(int j=i;j<(i+k);j++){
            sum+=arr[j];
        }
        if(max<sum){
            max=sum;
        }
    }
    printf("%d",max);
    return 0;
}