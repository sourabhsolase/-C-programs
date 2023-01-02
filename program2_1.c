#include<stdio.h>

void display(int ino)
{
    int icnt=0;
    for(icnt=1; icnt<=ino;icnt++)
    {
        printf("*");

    }
}

int main()
{
    int iValue=0;

    printf("enter number");
    scanf("%d",&iValue);
    display(iValue);

    return 0;
}