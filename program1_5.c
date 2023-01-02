#include<stdio.h>

void Accept(int ino)
{

    int icnt=0;
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("*");
    }
}

int main()
{
    int iValue=0;
    iValue=5;
    Accept(iValue);

    return 0;
}