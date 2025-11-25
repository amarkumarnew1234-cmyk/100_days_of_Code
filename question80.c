// Q80: Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

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
    if(n==p){
        int C[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                C[i][j]=0;
            }
        }
        for(int i=0;i<m;i++){
            for(int var=0;var<n;var++){
                for(int j=0;j<q;j++){
                    C[i][j]+=A[i][var]*B[var][j];
                }
            }
        }
        printf("Resultant matrix:\n");
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("Product not possible");
    }
    return 0;
}