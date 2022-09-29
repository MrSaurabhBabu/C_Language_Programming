#include<stdio.h>
#include<conio.h>  
void main()
{
    int num, i;
    printf("Enter No. To Display Table :-");
    scanf("%d",&num);
    i=1;
    do
    {
    printf("%d*%d=%d \n",num,i,num*i);
    i++;
    }
    while(i<=10);
    getch();
}