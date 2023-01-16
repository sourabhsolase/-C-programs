#include<stdio.h>
int countwhite( char *str)
{
   
   int icnt=0,i=0;
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==' ')
    {
        icnt++;
    }
    }
    return icnt;
}
 int main()
 {
    char arr[20];
    int iret=0;
    printf(" the string :\n");
    scanf("%[^'\n]s",arr);
   iret=countwhite(arr);
      printf("%d",iret);
         
     return 0;
 }
