#include<stdio.h>
void display(int irow,int icol)
{
    
    int i=0,j=0;
    for(i=1;i<=irow;i++)
    {
        for(j=icol;j>=1;j--)
        {
            if(j<i)
             {
              printf("#\t");
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