// Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

#include<stdio.h>
int main(){
    int m,n,sum=0;
    printf("Enter no.of rows and columns:");
    scanf("%d %d",&m,&n);
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&A[i][j]);
        }
    }
    
    if(m!=n){
        printf("Not square matrix");
        return 0;
    }
    for(int i=0;i<m;i++){
        sum+=A[i][i];
    }
    printf("%d",sum);    

    return 0;
}