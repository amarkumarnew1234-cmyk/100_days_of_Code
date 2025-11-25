// Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

#include<stdio.h>

int main(){
    int m,n,var=1,temp;
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
        temp=A[i][i];
        for(int j=0;j<m&&j!=i;j++){
            if(temp==A[j][j]){
                var=0;
                break;
            }
        }
        if(!var){
            break;
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