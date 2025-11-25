//Q116: Write a program to take an integer numay nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the numay such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

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
    int target;
    printf("target=");
    scanf("%d",&target);
    int resi=-1,resj=-1,exit=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(num[i]+num[j]==target&&i!=j){
                resi=i;
                resj=j;
                exit=1;
                break;
            }
        }
        if(exit){
            break;
        }
    }
    printf("%d %d",resi,resj);
    return 0;
}