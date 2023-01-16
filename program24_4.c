#include<stdio.h>
#include<stdbool.h>
bool checkspecial(char ch)
{
    if((ch>=33)&&(ch<=64))
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
bret=checkspecial(cvalue);
if(bret==true)
{
    printf("it is a special character :\n");
}
else
{
    printf("it is not a special character :\n");
}
    return 0;
}