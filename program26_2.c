#include<stdio.h>
void struprx( char *str)
{
   
   int i=0;
  for(i=0;str[i]!='\0';i++)
  {
    if((str[i]>='a')&&(str[i]<='z'))
    {
        str[i]=str[i]-32;
         
     }
       
  }
   printf("%s",str);
}
 int main()
 {
    char arr[20];
    
    printf(" the string :\n");
    scanf("%[^'\n]s",arr);
    struprx(arr);
     
     return 0;
 }
