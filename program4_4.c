#include<stdio.h>

int sumnonfactors(int ino)
{
    int icnt =0;
    int isum=0;
   int iadd =0;

    for(icnt=1;icnt<ino;icnt++)
    {
        if((ino%icnt)==0)
        {
            isum=isum+icnt;
        }
       return isum;

int main()
{
 int ivalue=0 ,iret=0;
 printf("enter the number\n");
 scanf("%d",&ivalue);
 iret=sumnonfactors(ivalue);

 printf("summation of  factors :%d\n",iret);
 
    return 0;
}