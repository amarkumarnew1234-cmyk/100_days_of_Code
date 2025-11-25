//Q101: Write a Program to take a sorted numsay(say nums[]) and an integer (say target) as inputs. The elements in the sorted numsay might be repeated. 
//You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

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
    int target;
    printf("Enter target:");
    scanf("%d",&target);
    int first=-1,last=-1;
    int start = 0, end = count - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] == target) {
            first = mid;
            end = mid - 1;
        } 
        else if (nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    start = 0;
    end = count - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (nums[mid] == target) {
            last = mid;
            start = mid + 1;
        } 
        else if (nums[mid] < target){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    printf("%d,%d",first,last);
    return 0;
}