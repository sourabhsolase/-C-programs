#include<stdio.h>

int countchar( char*str,char ch)
{
   int icnt=0;
   while(*str != '\0')
   {
         if(*str==ch)
         {
            icnt++;
        
         }
             str++;     
    }
    
  return icnt;
}
int main()
{
     char cvalue='\0'; 
    char arr[20];
    int iret=0;
    printf("enter the string :\n");
    scanf("%[^'\n]s",arr);

    printf("enter character :\n");
    scanf(" %c",&cvalue);
    
     iret =countchar(arr,cvalue);
   
        printf("CHARACTER frequency is:%d\n",iret);
   
    
     return 0;
}