//Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/

#include<stdio.h>
int main(){
    int m,n;
    printf("Enter how many numbers:");
    scanf("%d",&m);
    int nums1[m];
    for(int i=0;i<m;i++){
        scanf("%d",&nums1[i]);
    }
    printf("Enter how many numbers:");
    scanf("%d",&n);
    int nums2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&nums2[i]);
    }
    int merarr[m+n];
    int cn1=0,cn2=0,cm=0;
    while(cn1<m&&cn2<n){
        if(nums1[cn1] <= nums2[cn2]){
            merarr[cm++]=nums1[cn1++];
        }
        else{
            merarr[cm++]=nums2[cn2++];
        }
    }
    while(cn1<m){
        merarr[cm++]=nums1[cn1++];
    }
    while(cn2<n){
        merarr[cm++]=nums2[cn2++];
    }
    printf("Merged array is:");
    for(int i=0;i<m+n;i++){
        printf("%d ",merarr[i]);
    }
    return 0;
}