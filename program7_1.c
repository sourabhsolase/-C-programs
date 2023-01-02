#include<stdio.h>
void pattern(int ino)
{
    int icnt=0;
   if(ino<0)
   {
    ino=-ino;
   }
    for(icnt=0;icnt<ino;icnt++)
    {
        printf("$\t*\t",icnt);
    }
}
int main()
{
    int ivalue=0;
    printf("enter number :\n");
    scanf("%d",&ivalue);
 pattern(ivalue);
 return 0;
}