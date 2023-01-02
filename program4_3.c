#include <stdio.h>

void nonfact(int ino)
{
    int icnt=0;
    printf("no factors o%d\n",ino);
    for(icnt=1;icnt<=ino;icnt++)
    {
        if((ino%icnt)!=0) 
        {
            printf("%d\n",icnt);

        }
    }
}
int main()
{
    int ivalue=0;
    printf("enter number :\n");
    scanf("%d",&ivalue);

    nonfact(ivalue);
    return 0;
}