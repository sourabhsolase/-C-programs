#include<stdio.h>

void multipledisplay(int ino)
{
    int icnt=0;
    for(icnt=1;icnt<=5;icnt++)
    {
        printf("%d\t",ino*icnt);
    }
}
int main()
{
    int ivalue=0;
    printf("ente number :\n");
    scanf("%d",&ivalue);
    multipledisplay(ivalue);
    return 0;
}