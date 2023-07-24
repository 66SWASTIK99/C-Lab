//calculate the distance between cartesian coordinate points

#include<stdio.h>
#include<math.h>

int main()
{
    int X, x, Y, y;
    printf("Enter first co-ordinate:\nX co-ordinate=");
    scanf("%d",&X);
    printf("Y co-ordinate:");
    scanf("%d",&Y);
    printf("Enter second co-ordinate:\nX co-ordinate=");
    scanf("%d",&x);
    printf("Y co-ordinate:");
    scanf("%d",&y);
    printf("Distance: %f",sqrt((X-x)*(X-x)+(Y-y)*(Y-y)));
}
/*
working formula for distance is ..........
and this program is on implementing this formula.
due to the use of square root we have include math.h library rathe than creating own uder defined function
in this formula there are four parameters to measure the distance in which 2 of them are the coordinates of a point and remaining of another
so we started by creating four variable where X,Y being the coordinate of one point and x,y of another
then we take these datas from the user 
And we implement the formula to print the distance
*/
