#include<stdio.h>
#include<stdbool.h>

typedef int BOOL;
#define True 1
#define false 0

int check(int ino)
{
    if((ino%5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    BOOL bret =false;

    printf("enter number :");
    scanf("%d",&iValue);

    bret=check(iValue);

    if(bret == true)
    {
        printf("divisible by 5");

    }
    else
    {
        printf("not divisible by 5 ");
    }

return 0;
}
