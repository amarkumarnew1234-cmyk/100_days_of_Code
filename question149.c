//Q149: Use malloc() to allocate structure memory dynamically and print details.

/*
Sample Test Cases:
Input 1:
Student allocated dynamically with details: Tina 105 88
Output 1:
Name: Tina | Roll: 105 | Marks: 88

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
        printf("Student allocated dynamically with details: ");
        scanf("%s %d %d", S[i].Name, &S[i].roll, &S[i].marks);
    }
}

void print_structure(struct Student *S, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("Name: %s | Roll: %d | Marks: %d\n",
               S[i].Name, S[i].roll, S[i].marks);
    }
}
