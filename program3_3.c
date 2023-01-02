#include<stdio.h>

void displayevenfactor(int ino)
{
   int i=0;
   if(ino<=0)
   {
    ino-ino;
   }
   for(i=2;i<=(ino/2);i=i+2)
   {
    if((ino%-i)==0)
    {
       printf("%d\t",i);
    }
   }
}

int main()
{
int ivalue;
printf("enter the number :\n");
scanf("%d",&ivalue);

displayevenfactor(ivalue);

    return 0;
}