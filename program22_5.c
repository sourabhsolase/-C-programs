#include<stdio.h>
void display(int irow,int icol)
{
    
    int i=0,j=0;
    if(irow!=icol)
    {
        return ;
    }
    for(i=1;i<=irow;i++)
    {
        for(j=1;j<=icol;j++)
        {
            if((j==1)||(j==icol)||(i==1)||(i==irow))
             {
              printf("%d\t",j);
             }
             else
             {
                printf("*\t");
             }

        }
    
       printf("\n");

    }
   }
int main()
{
 int ivalue1=0,ivalue2=0;
 printf("enter the row and column:\n");
 scanf("%d%d",&ivalue1,&ivalue2);

 display(ivalue1,ivalue2);
 return 0;
}