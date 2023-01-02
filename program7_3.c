#include<stdio.h>

void display(int ino)
{
 for(int icnt=ino;icnt>=-ino;icnt--)
 {
    printf("%d\t",icnt);
 } 
}

int main()
{
    int ivalue=0;
    printf("enter number :\n");
    scanf("%d",&ivalue);

    display(ivalue);
    return 0;
}