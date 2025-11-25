// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include<stdio.h>
int main(){
    int m,n,var=1;
    printf("Enter no.of rows and columns:");
    scanf("%d %d",&m,&n);
    int A[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
        scanf("%d",&A[i][j]);
        }
    }
    
    if(m!=n){
        printf("False");
        return 0;
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(A[j][i]!=A[i][j]){
                var=0;
                break;
            } 
        }
    }
    if(var){
        printf("True");
    }
    else{
        printf("False");
    }

    return 0;
}