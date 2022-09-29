#include <stdio.h>
#include <conio.h>
void main()
{
    int num,i,flag=0;
    printf("Enter Number To Check Number is Prime or not:-");
    scanf("%d",&num);
    for(i=2; i<num; i++)
    
    if(num%i==0)
    
    flag=1;
    
    if(flag==0)
    {
    printf("%d is Prime number.",num);
    }
    else
    {
    printf("%d is not prime no.",num);
    }
    getch();
}