#include<stdio.h>

void display(int ino)
{
    int icnt =0;
 while(ino>icnt)
 {
    printf("*");
    ino--;
 }
}

int main()
{
    int iValue=0;
    printf("enter number");
    scanf("%d",&iValue);
    display(iValue);

    return 0;
    
}