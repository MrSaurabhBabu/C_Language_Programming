#include<stdio.h>
#include<conio.h>
void main()
{
    int marks;
    printf("Enter your marks ");
    scanf("%d",&marks);
    if(marks<0)
    {
        printf("Wrong Entry");
    }
    else if(marks<25)
    {
        printf("Grade F");
    }
    else if(marks>=25 && marks<45)
    {
    printf("Grade E");
    }
    else if(marks>=45 && marks<50)
    {
    printf("Grade D");
    }
    else if(marks>=50 && marks<60)
    {
    printf("Grade C");
    }
    else if(marks>=60 && marks<80)
    {
    printf("Grade B");
    }
    else if(marks>=80)
    {
    printf("Grade A");
    }
    getch();
}