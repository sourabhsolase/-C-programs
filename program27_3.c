#include<stdio.h>

int fristchar( char*str,char ch)
{
   int i=0; 
   for(i=0;str[i]!='\0';i++)
   {
         if(str[i]==ch)
         {
            break;
        
         }                 
    }
    return i;
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
    
     iret = fristchar(arr,cvalue);
       printf("CHARACTER location is:%d\n",iret);
    
     return 0;
}