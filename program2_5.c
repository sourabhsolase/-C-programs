#include<stdio.h>
#include<stdbool.h>

bool checkeven(int ino)
{
    if((ino %2)==0)
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
    bool bret =false;
    printf("enter number\n");
    scanf("%d",&iValue);

    bret=checkeven(iValue);
    if(bret==true)
    {
        printf("it is even\n");

    }
    else
    {
       printf("it is odd number\n");
    }
    return 0;
}