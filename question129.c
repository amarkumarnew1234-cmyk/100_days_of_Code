//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/


#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("numbers.txt","r");
    if(fp==NULL){
        printf("File Error");
        return 0;
    }
    else{
        int nums[20],index=0,sum=0,var=0,num=0;
        char c;
        while (1) {
            char c=fgetc(fp);
            if(c==EOF){
                break;
            }
            if(c>='0'&&c<='9'){
                num=num*10+(int)(c-'0');
                var=1;
            }
            else{
                if(var){
                    nums[index++]=num;
                    var=0;
                    num=0;
                }
            }
        }
        if(var){
            nums[index++]=num;
        }
        for(int i=0;i<index;i++){
            sum+=nums[i];
        }
        float average=sum/index;
        printf("Sum = %d\nAverage = %.2f",sum,average);
    }
    fclose(fp);
    return 0;
}