//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

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

    printf("The entered values:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}