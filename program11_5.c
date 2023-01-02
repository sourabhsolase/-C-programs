#include<stdio.h>
void rangedispalyrev(int istart,int iend)
{
    int icnt=0;
    
     if(iend<istart)
        {
            printf("range invalid ",icnt);
        }
        else
        {
           for(icnt=iend;icnt>=istart;icnt--)
             {
                printf("%d\t",icnt);
               }
        }
        
}



int main()
{
    int ivalue1=0,ivalue2=0;
    printf("enter start point :");
    scanf("%d",&ivalue1);
    printf("enter end point :");
    scanf("%d",&ivalue2);

    rangedispalyrev(ivalue1,ivalue2);
    return 0;

}