#include<stdio.h>

void printeven(int ino)
{
     int icnt =0;
     if  (ino<=0)
     {
         
       return;
     }
     for(icnt = 2;icnt<=ino;icnt=icnt+2)
      {
      
        printf("even numbers are:%d\n",icnt);
     }
              
}
   
int main()
{
    int ivalue=0;

    printf("enter number\n");
    scanf("%d",&ivalue);

    printeven(ivalue);
    return 0;
}