#include <stdio.h>
#include <conio.h>
void main()
{
    int i, c=0;
    clrscr();
    printf("Enter A Number :-");
    scanf("%d",&i);
    for(;i>0;i--)
    {
    c=i;
    printf("\n");
    for(; ;)
    {
    printf("%3d",c);
    if(c==0)
    break;
    c--;
    }
  }    
}