#include<stdio.h>
#include<stdbool.h>

bool chkchar( char*str,char ch)
{
   while(*str != '\0')
   {
         if(*str==ch)
         {
            break;
         }
    str++;
   }
   if(*str=='\0')
   {
    return false;
   }
   else
   {
    return true;
   }
   
}
int main()
{
    char cvalue='\0';
    char arr[20];
    bool bret=false;
    printf("enter the string :\n");
    scanf("%[^'\n]s",arr);

    printf("enter character :\n");
    scanf(" %c",&cvalue);
    
     bret =chkchar(arr,cvalue);
   if(bret==true)
   {
     printf("character found");
   }
    else
    {
        printf("CHARACTER IS NOT FOUND");
    }
    
     return 0;
}