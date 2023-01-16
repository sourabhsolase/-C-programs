#include<stdio.h>
#include<stdbool.h>

bool chkvowel( char*str)
{
   int icnt=0;
   while(*str != '\0')
   {
    if((*str=='a')||(*str=='o')||(*str=='e')||(*str=='u')||(*str=='i')||(*str=='A')
    ||(*str=='O')||(*str=='E')||(*str=='U')||(*str=='I'))
    {
        icnt++;
    }
    str++;
   }
   if(*str==icnt)
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
    char arr[20];
    bool bret=false;
    printf("enter the string :\n");
    scanf("%[^'\n]s",arr);
     bret =chkvowel(arr);
   if(bret==true)
   {
     printf("contains vowel");
   }
    else
    {
        printf("there is no vowel");
    }
    
     return 0;
}