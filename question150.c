//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/

#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char Name[50];
    int roll;
    int marks;
};

void enter_details(struct Student *, int);
void print_structure(struct Student *, int);

int main()
{
    int num;
    printf("How many students to add: ");
    scanf("%d",&num);

    struct Student *s;
    s = (struct Student*)malloc(num * sizeof(struct Student));

    if(s == NULL)
    {
        printf("Memory allocation failed");
        return 0;
    }

    enter_details(s, num);
    print_structure(s, num);

    free(s);
    return 0;
}

void enter_details(struct Student *S, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Student pointer modifying values: ");
        scanf("%s %d %d", S->Name, &S->roll, &S->marks);
        S++;
    }
}

void print_structure(struct Student *S, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
               S->Name, S->roll, S->marks);
        S++;
    }
}
