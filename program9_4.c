#include<stdio.h>

int oddfactorial(int ino )
{
    int icnt=0;
    int ifact=1;
    if(ino<0)
    {
        ino=-ino;
    }
    for(icnt=1;icnt<=ino;icnt++)
    {
        if((icnt%2)!=0)
        {
          ifact=ifact*icnt;
        }
        
            
        
           
    }

 return ifact;
}
int main()
{
 int ivalue =0;
 int iret =0;
 printf("enter number :");
 scanf("%d",&ivalue);
 iret=oddfactorial(ivalue);
 printf("odd factorial of number is :%d\n",iret);

    return 0;

}