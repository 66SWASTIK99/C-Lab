//Store person's name and age. But store full age format(years months and day) for child, years only for adult, and 'O' alphabet for Old.

#include<stdio.h>

int main()
{
    int max = 3;
    struct full_age
    {
        int y,m,d;
    };
    
    union age
    {
        struct full_age A;
        int age;
        char S;
    };
    struct info
    {
        char name[30];
        int status;
        union age X;
    }P[max];
    for (int i = 0; i < max; i++) {
        printf("Enter name of person %d: ", i + 1);
        scanf("%s", P[i].name);
        printf("Enter age year: ");
        scanf("%d",&P[i].X.A.y);
        if(P[i].X.A.y<18)
        {
            P[i].status = 0;
            printf("Enter month:");
            scanf("%d",&P[i].X.A.m);
            printf("Enter day:");
            scanf("%d",&P[i].X.A.d);
        }
        else if(P[i].X.A.y<60)
        {
            P[i].status = 1;
            P[i].X.age = P[i].X.A.y;
        }
        else
        {
            P[i].status = 2;
            P[i].X.S = 'O';
        }
    }
    printf("\nPeople's Age status\nS.N.\tName\t\t\t\tAge\n");
    for (int i = 0; i < max; i++)
    {
        printf("%d\t%s\t\t\t", i+1, P[i].name);
        if(P[i].status == 0)
        {
            printf("%dyears %d months %d days\n", P[i].X.A.y, P[i].X.A.m, P[i].X.A.d);
        }
        else if(P[i].status == 1)
        {
            printf("%d\n",P[i].X.age);
        }
        else 
        printf("%c\n", P[i].X.S);
    }
}
/*
i have created 2 structures and 1 union. where one structure stores peoples detail also consisting of one union inside of it which stores
age data according to age cateogory
and it also consists of one structure to store full age if needed
then name and age(in years) are taken , if age is less than 18 then the status is stored as 0 to represent children and we asks months and days
if the age is less than 60 then the status is stored as 1 representing adult and 
if none of the condition is met then the status is stored as 2 representing as OLD
then finally the stored data is printed whereas age is printed depending upon age cateogory
which is full age detail for child, only years for adult and O for old
*/
