//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include<stdio.h>
int main(){
    int r,c;
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
    int arr1[c][r];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr1[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    return 0;
}