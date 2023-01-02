#include<stdio.h>
void table(int ino)
{
    int icnt=0;
    if(ino<0)
    {
        ino=-ino;
    }
    for(icnt=1;icnt<=10;icnt++)
    {
        printf("%d\t",ino*icnt);
    }
}
int main()
{
    int ivalue=0;
    printf("enter number:\n");
    scanf("%d",&ivalue);
table(ivalue);
return 0;
}