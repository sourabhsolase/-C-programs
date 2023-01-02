#include<stdio.h>
void number(int ino)
{
if(ino<=50)
{
    printf(" is small",ino);
}
else if(ino<=100)
{
    printf("number is medium",ino);
}
else
{
  printf(" number is large",ino);
}
}

int main()
{
    int ivalue=0;
    printf("enter number:\n");
    scanf("%d",&ivalue);
    number(ivalue);
    return 0;
}