#include<stdio.h>
#include<stdbool.h>
bool check(char ch)
{
    if((ch>='a')&&(ch<='z'))
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
printf("enter character :\n");
scanf("%c",&cvalue);
bret=check(cvalue);
if(bret==true)
{
    printf("it is a small alphabet :\n");
}
else
{
    printf("it is not a small alphabet :\n");
}
    return 0;
}