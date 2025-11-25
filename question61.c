//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/

#include<stdio.h>
int main(){
    int count,search,var=1;
    printf("Enter number of elements:");
    scanf("%d",&count);
    int arr[count];
    printf("Enter Elements:\n");
    for(int i=0;i<count;i++){
        scanf("%d",&arr[i]);
    }
    printf("Which element to search:");
    scanf("%d",&search);
    for(int i=0;i<count;i++){
        if(arr[i]==search){
            printf("Found at index %d",i);
            var=0;
            break;
        }
    }
    if(var){
        printf("-1");
    }
    return 0;
}