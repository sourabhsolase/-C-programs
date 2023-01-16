#include<stdio.h>
int differnce( char *str)
{
   
   int icnt=0, i=0;
    while(*str != '\0')
   {
    if((*str>='A')&&(*str<='Z'))
    {
        icnt++;
    }
    
    else
    {
          i++;
    }
    str++;
   }
   return icnt -i; 
}
int main()
{
    char arr[20];
    int iret=0;
    printf("enter the string :\n");
    scanf("%[^'\n]s",arr);
     iret =differnce(arr);
     printf("%d",iret);
     return 0;
}