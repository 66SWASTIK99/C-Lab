//store students datas consisting name, ID, marks in structure and display the result table and detail of highest scorer separately 
#include<stdio.h>

int main()
{
    int max = 3;
    struct student
    {
        char id[10];
        char name[30];
        float marks[3];
        float total;
    }s[max];
    int i,j,high;
    for(i=0; i<max; i++)
    {
        printf("\nEnter id: ");
        scanf("%s",s[i].id);
        printf("Enter name: ");
        scanf("%s",s[i].name);
        s[i].total = 0;
        for(j=0; j<3; j++)
        {
            printf("Enter marks %d: ",j+1);
            scanf("%f",&s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
    }
    high=0;
    for(i=0; i<max; i++)
    {
        if(s[high].total<s[i].total)
        high = i;
    }
    printf("\nStudent Details\nID\t\tName\t\t\tMarks 1\t\tMarks 2\t\tMarks 3\t\tTotal Marks\n");
    for(i=0; i<max; i++)
    {
        if(i!=high)
        {
            printf("%s\t\t",s[i].id);
            printf("%s\t\t\t",s[i].name);
            for(j=0; j<3; j++)
            {
                printf("%f\t", s[i].marks[j]);
            }
            printf("%f\n",s[i].total);
        }
    }
    printf("\nHighest Scorer\n");
    printf("%s\t\t",s[high].id);
    printf("%s\t\t\t",s[high].name);
    s[i].total = 0;
    for(j=0; j<3; j++)
    {
        printf("%f\t", s[high].marks[j]);
    }
    printf("%f",s[high].total);
}
/*
LAB REPORT KO LAGI LEKHEKO
initially i have declared a varible to ease scaling the size of data and has been iinitialized to 3 to ease the testing later on.
then the struxture is created . after that data is taken form the user. also i have summed up the marks to total marks variable.
in next step i have identified the data position with highest total marks and stored it in a separate variable.
finally the data of student is printed and data of highest scorer is printed separately 
*/
