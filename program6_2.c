#include<stdio.h>
#include<stdbool.h>

bool checkgreater(int ino)
{
    if(ino>100)
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
    int ivalue=0;
    bool bret=false;
    printf("please enter number :\n");
    scanf("%d",&ivalue);
    bret=checkgreater(ivalue);
    if(bret==true)
    {
        printf("%d is greater than 100 \n",ivalue);

    }
    else
    {
        printf("%d is smaller than 100 \n",ivalue);
    }
  return 0;
}