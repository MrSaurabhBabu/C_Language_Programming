#include<stdio.h>
#include<conio.h>
void main( )
{
    float r,d;
    clrscr( );
    printf("Enter Rupees Value To Convert In US $ :- ");
    scanf("%f",&r);
    d=r/76;
    printf("%.0f rupees is equal to %f $",r,d);
    getch( );
}