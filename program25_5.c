#include<stdio.h>
void reverse( char *str)
{
   
   int icnt=0,i=0;
  for(i=0;str[i]!='\0';i++)
  {
    icnt++;
  
  }
   for(i=icnt;str[i]>=0;i--)
   {
      
      printf("%c",str[i]);
   }
  
}
 int main()
 {
    char arr[20];
    int iret=0;
    printf("enter the string :\n");
    scanf("%[^'\n]s",arr);
    reverse(arr);
     
     return 0;
 }