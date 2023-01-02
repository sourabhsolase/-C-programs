#include<stdio.h>

int factdiff(int ino)
{
    int icnt=0;
    int isum=0;
    int iadd=0;
    for(icnt=1;icnt<ino;icnt++)
    {
        if((ino%icnt)==0)
        {
            isum=isum + icnt;

        }
         else
        {
            iadd=iadd+icnt;
        }
    }
    return isum-iadd ;

}
int main()
{
    int ivalue=0;
    int iret=0;
    
    printf("enter the number\n");
    scanf("%d",&ivalue);
    iret=factdiff(ivalue);
    printf("%d\n",iret);
    
return 0;
}