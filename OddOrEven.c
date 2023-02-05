#include <stdio.h>
#include <conio.h>
void main()
{
    int num;
    printf("Please Enter a Number:");
    scanf("%d",&num);
    if (num%2==0)
    {
        printf("%d is Even Number.",num);
    }
    else{
        printf("%d is Odd Number.",num);
    }
}