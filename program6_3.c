#include<stdio.h>
#include<stdbool.h>

bool checkequal(int ino1,int ino2)
{
    if(ino1==ino2)
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
    int ivalue1=0,ivalue2=0;
    bool bret=false;
    printf("please enter two number :\n");
    scanf("%d%d",&ivalue1,&ivalue2);
    bret=checkequal(ivalue1,ivalue2);
    if(bret==true)
    {
        printf("%d is equal ");
    }
    else
    {
       printf("%d is not equal" );

    }
    return 0;
}