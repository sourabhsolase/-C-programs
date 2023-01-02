#include<stdio.h>
void displayodd(int ino)
{
    int icnt=0;
   for(icnt=1;icnt<ino;icnt++)
   {
    if((icnt%2)!=0)
    {
        printf("%d\t",icnt);
    }
   }
}
int main()
{
    int ivalue=0;
    printf("enter number :\n");
    scanf("%d",&ivalue);
displayodd(ivalue);
    return 0;
}