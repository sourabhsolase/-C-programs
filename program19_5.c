#include<stdio.h>

void pattern(int irow,int icolumn)
{
   int icnt=0,i=0;
   for(icnt=1;icnt<=irow;icnt++)
   {
    for(i=icolumn;i>=1;i--)
    {
        printf("%d\t",icnt);
    }
         printf("\n");
   }

}
int main()
{
int ivalue1=0,ivalue2=0;
printf("enter row and column:\n ");
scanf("%d%d",&ivalue1,&ivalue2);

pattern(ivalue1,ivalue2);
    return 0;

}