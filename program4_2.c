#include<stdio.h>

void factrev(int ino)
{
    int icnt =0;
    printf("factors are :\n");
    for(icnt=(ino/2);icnt>=1;icnt--)
    {
        if((ino%icnt)==0)
          {
            printf("%d\t",icnt);
          }
    }
}

int main()
{
    int ivalue=0;
    printf("enter number :");
    scanf("%d",&ivalue);

    factrev(ivalue);
    return 0;
}