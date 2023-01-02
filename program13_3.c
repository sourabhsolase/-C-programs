#include<stdio.h>
int countrange(int ino)
{
    int idigit=0;
    int icnt=0;
    if(ino<0)
    {
        ino=-ino;

    }
    while(ino>0)
    {
        idigit=ino%10;
        ino=ino/10;
        if(idigit>3 && idigit<7)  
        {
            icnt++;
        }
    }
   return icnt;
}

int main()
{
    int ivalue=0;
    int iret=0;
    printf("enter number");
    scanf("%d",&ivalue);
    iret=countrang(ivalue);
    printf("%d",iret);
    return 0;
}