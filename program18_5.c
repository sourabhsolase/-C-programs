#include<stdio.h>
void pattern(int ino)
{
    int icnt=0;
    for(icnt=2;icnt<=(ino*2);icnt=icnt+2)
    {
      printf("%d\t",icnt);

    }
}
int main()
{
    int ivalue=0;
    printf("enter the number :\n");
    scanf("%d",&ivalue);

pattern(ivalue);
return 0;
}