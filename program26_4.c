#include<stdio.h>
void displaydigit( char *str)
{
   
   int i=0;
  for(i=0;str[i]!='\0';i++)
  {
    if((str[i]>='0')&&(str[i]<='9'))
    {
        
    printf("%c",str[i]);
         
     }
       
  }
}
 int main()
 {
    char arr[20];
   
    printf(" the string :\n");
    scanf("%[^'\n]s",arr);
    displaydigit(arr);
     
     return 0;
 }
