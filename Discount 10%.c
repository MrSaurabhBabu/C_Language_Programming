#include<stdio.h>
#include<conio.h>
void main()
{
int dis,np,pa;
clrscr();
printf("Enter purchase amt.:-");
scanf("%d",&pa);
if(pa>1000)
dis=(pa*10)/100;
np=pa-dis;
{
printf("net payable amt. is %d \n dis. is %d \n purchase amt is %d",np,dis,pa);
}
getch();
}