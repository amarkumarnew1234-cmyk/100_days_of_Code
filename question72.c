//Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include<stdio.h>
int main(){
    int r,c,sum=0;
    printf("Enter no. of rows and columns:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter values:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){   
            printf("Enter [%d][%d] element:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum+=arr[i][j];
        }
    }
    printf("The sum of elemnts is : %d",sum);
    return 0;
}