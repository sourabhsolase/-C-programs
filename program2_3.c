
#include<stdio.h>

void display(int ino)
{
    if (ino<10 )
    {
        printf("hello");

    }
    else
    {
            printf("demo");

    }
}

int main()
{
    int iValue =0;
    printf("enter number");
    scanf("%d",&iValue);

    display(iValue);
    
    return 0;
}
