#include<stdio.h>
 
 int factorial(int ino)
{
    int ifact=1;
    int icnt=0;
    if(ino<0)
    {
        ino=-ino;
    }
    for(icnt=1;icnt<=ino;icnt++)
    {
       ifact=ifact*icnt;

     
    }
    return ifact;
}
int main()
{  
    int ivalue=0,iret=0;

    printf("enter number :");
    scanf("%d",&ivalue);
    iret=factorial(ivalue);

    printf("factorial of %d is %d\n",ivalue,iret);;
 return 0;
}    