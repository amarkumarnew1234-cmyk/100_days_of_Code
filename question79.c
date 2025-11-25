// Q79: Perform diagonal traversal of a matrib.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/

#include <stdio.h>
int main(){
    int m,n;
    printf("Enter no.of rows and columns:");
    scanf("%d %d",&m,&n);
    int A[m][n];
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&A[i][j]);
        }
    }

    int arr[m*n];
    int count=0,a,b;
    for(int i=0;i<m+n-1;i++){
        if(i%2==0){
            a=(i<m)?i:m-1;
            b=i-a;
            while(a>=0&&b<n){
                arr[count++]=A[a][b];
                a--;
                b++;
            }
        }
        else{
            b=(i<n)?i:n-1;
            a=i-b;
            while(b>=0&&a<m){
                arr[count++]=A[a][b];
                a++;
                b--;
            }
        }
    }

    for (int i=0;i<m*n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}