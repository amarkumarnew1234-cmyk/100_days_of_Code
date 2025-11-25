//Q75: Add two matrices.
/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4

2 2
5 6
7 8
Output 1:
6 8
10 12
*/

#include<stdio.h>
int main(){
    int m,n,p,q;
    printf("Enter no.of rows and columns of matrix A:");
    scanf("%d %d",&m,&n);
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&A[i][j]);
        }
    }
    printf("Enter no.of rows and columns of matrix B:");
    scanf("%d %d",&p,&q);
    int B[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
        scanf("%d",&B[i][j]);
        }
    }
    if(m==p&&n==q){
        int C[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                C[i][j]=A[i][j]+B[i][j];
            }
        }
        printf("On addition");
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }

    }
    else{
        printf("Addition  not possible");
    }
    return 0;
}