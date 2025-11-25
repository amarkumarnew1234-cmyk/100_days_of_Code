//Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter how many numbers:");
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    int var=1;
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n;j++){
            if(i==num[j]){
                var=0;
                break;
            }
        }
        if(var){
            printf("%d",i);
        }
        var=1;
    }
    return 0;
}