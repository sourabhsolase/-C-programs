#include<stdio.h>

void display(int ino)
{
   int  icnt=1;
    for(icnt=0;icnt<ino;icnt++)
    {
        printf("* #\t" ,icnt);
         
}
}

int main()
{
int ivalue =0;
printf("enter number :");
scanf("%d",&ivalue);
display(ivalue);

 return 0;
}