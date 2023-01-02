#include<stdio.h>

int factorialdiff(int ino)
{
   int icnt=0;
   int ifact1=1,ifact2=1;
    if(ino<0)
    {
        ino=-ino;
    }
   for(icnt=1;icnt<=ino;icnt++)
   {
    if((icnt%2)==0)
    {
        ifact1=ifact1*icnt;

    }
    else 
    {
        ifact2=ifact2*icnt;
    }
    
   }
   return ifact1-ifact2;
}
int main()
{
 int ivalue=0;
 int iret=0;
 printf("enter number :");
 scanf("%d",&ivalue);

 iret=factorialdiff(ivalue);
 printf("factorial difference is :%d",iret);

    return 0;
}