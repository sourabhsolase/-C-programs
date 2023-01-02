#include<stdio.h>
int rangeaddyeven(int istart,int iend)
{
    int icnt=0;
    int iadd=0;
    
    
     
           for(icnt=istart;icnt<=iend;icnt++)
             {
                if((icnt%2)==0)
                {
                    iadd=iadd+icnt;  
                }
               }
        
        return iadd;
}



int main()
{
    int ivalue1=0,ivalue2=0;
    int iret=0;
    printf("enter start point :");
    scanf("%d",&ivalue1);
    printf("enter end point :");
    scanf("%d",&ivalue2);

 iret=rangeaddyeven(ivalue1,ivalue2);
 if(ivalue1<0)
    {
        ivalue1=-ivalue1;
    }
 
     if(ivalue2<ivalue1)
        {
            printf("range invalid ");
        }
        else
        {
                printf("addition of even range number is :%d",iret);

        }
    return 0;

}