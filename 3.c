//to convert date from B.S. (Nepali Calender) to A.D. (Gregorian Calender) using structure

#include<stdio.h>

struct date
    {
        int Y,M,D;
    };

struct date convert(struct date X)
{
    printf("B.S. : %d/%d/%d\n", X.Y, X.M, X.D);
    if(X.D<17)
    {
        X.M--;
        X.D += 13; 
    }
    else
    X.D -= 17;
    if(X.M<8)
    {
        X.Y--;
        X.M += 4;
    }
    else
    X.M -= 8;
    X.Y -= 56;
    return X;
}

int main()
{
    struct date X;
    printf("B.S to A.D. converter\nEnter a year: ");
    scanf("%d",&X.Y);
    printf("Enter a month: ");
    scanf("%d",&X.M);
    printf("Enter a day: ");
    scanf("%d",&X.D);
    X=convert(X);
    printf("A.D. : %d/%d/%d", X.Y, X.M, X.D);
}
/*
Bikram Sambat is 56 years 8months and 17 days(approx.) ahead compared to gregorian calendar
firstly a structure is formed and declared. then the data is taken fron the user
a separate funtion is created to convert B.S. to A.D. where structure is taken in as parameter from main function
we need to reduce BS date by 46 years 8 months and 17 days to approximately for conversion to AD
so we start off by reducing day, if the days is more than 16 then the days is reduced by 17 otherwise month is reduced by 1 
and day is reduced by remaining days after reducing 17 days which is the sum of 13 days and days(BS)
then the month is reduced by 1 if month is more than 7 otherwise the year reduced by 1 and the month is equal to sum of 4 and the months(BS)
and finally year is reduced by 56 years
At last cnoverted date is returned to a main function
*/
