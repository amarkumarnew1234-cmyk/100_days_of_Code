//Q59: Count even and odd numbers in an array.

/*
Sample Test Cases:
Input 1:
6
1 2 3 4 5 6
Output 1:
Even=3, Odd=3

Input 2:
4
2 4 6 8
Output 2:
Even=4, Odd=0

*/
#include<stdio.h>
int main(){
    int count,even=0,odd=0;
    printf("Enter number of elements:");
    scanf("%d",&count);
    int arr[count];
    printf("Enter Elements:\n");
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<count;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even=%d ,Odd=%d",even,odd);
    return 0;
}