#include<stdio.h>
int rangeaddition(int istart,int iend)
{
    int icnt=0;
    int iadd=0;
    if(istart<0)
    {
        istart=-istart;
    }
     if(iend<istart)
        {
            printf("range invalid ",icnt);
        }
        else
        {
           for(icnt=istart;icnt<=iend;icnt++)
             {
               iadd=iadd+icnt;
                
               }
        }
        return iadd;
}
int main()
{
    int ivalue1=0,ivalue2=0;
    int iret =0;
    printf("enter start point :");
    scanf("%d",&ivalue1);
    printf("enter end point :");
    scanf("%d",&ivalue2);

   iret=rangeaddition(ivalue1,ivalue2);
   printf("addition is :%d",iret);
    return 0;

}