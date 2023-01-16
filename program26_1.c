#include<stdio.h>
void strlwrx( char *str)
{
   
   int i=0;
  for(i=0;str[i]!='\0';i++)
  {
    if((str[i]>='A')&&(str[i]<='Z'))
    {
        str[i]=str[i]+32;
         
     }
       
  }
   printf("%s",str);
}
 int main()
 {
    char arr[20];
    
    printf("enter the string :\n");
    scanf("%[^'\n]s",arr);
    strlwrx(arr);
     
     return 0;
 }