#include<stdio.h>

void display(int ino)
{
    int icnt=1;
    
    while(icnt<=ino)
    {
        printf("%d\t",icnt);
        icnt++;
    }
}

int main()
{
    int ivalue=0;
    printf("enter number :\n");
    scanf("%d",&ivalue);

    display(ivalue);
    return 0;
}