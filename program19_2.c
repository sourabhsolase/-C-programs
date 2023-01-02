#include<stdio.h>

int pattern(int irow,int icolumn)
{
   int icnt=0,i=0;
   for(icnt=1;icnt<=irow;icnt++)
   {
    for(i=1;i<=icolumn;i++)
    {
        printf("%d\t",i);
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