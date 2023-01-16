#include<stdio.h>

int lastchar( char*str,char ch)
{
   int icnt=0, i=0; 
   for(i=icnt;str[i]>=0;i--)
   {
         if(str[i]==ch)
         {
            break;
         }
          str--;       
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
    
     iret = lastchar(arr,cvalue);
   
        printf("CHARACTER frequency is:%d\n",iret);
   
        return 0;
}