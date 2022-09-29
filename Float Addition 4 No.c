#include<conio.h>
#include<stdio.h>
void main ()
{    
    float a,b,c,d,e;
    printf("Addition Of Four Number:-\n");
    printf("Enter Number:-");
    scanf("%f",&a);
    printf("Enter Number:-");
    scanf("%f",&b);
    printf("Enter Number:-");
    scanf("%f",&c);
    printf("Enter Number:-");
    scanf("%f",&d);
    e=a+b+c+d;
    printf("Addition Of %.2f,%.2f,%.2f and %.2f is %.6f",a,b,c,d,e);
    getch();
}