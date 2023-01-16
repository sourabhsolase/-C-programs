#include<stdio.h>
#include<stdbool.h>
bool check(char ch)
{
    if((ch>='0')&&(ch<='9'))
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
char cvalue='\0';
bool bret=false;
printf("enter digit :\n");
scanf("%c",&cvalue);
bret=check(cvalue);
if(bret==true)
{
    printf("it is a digit  :\n");
}
else
{
    printf("it is not a digit  :\n");
}
    return 0;
}