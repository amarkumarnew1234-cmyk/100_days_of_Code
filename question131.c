//Q131: Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6

*/


#include<stdio.h>
enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};
int main(){
    printf("SUNDAY = %d\n",SUNDAY);
    printf("Monday = %d\n",MONDAY);
    printf("Tuesday = %d\n",TUESDAY);
    printf("Wednesday = %d\n",WEDNESDAY);
    printf("Thursday = %d\n",THURSDAY);
    printf("Friday = %d\n",FRIDAY);
    printf("Saturday = %d\n",SATURDAY);
    return 0;
}