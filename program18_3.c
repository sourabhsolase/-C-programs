#include<stdio.h>
void pattern(int ino)
{
    int icnt=0;
    
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%d\t*\t",icnt);
        
    }
}
int main()
{
    int ivalue=0;
    printf("enter number :\n");
    scanf("%d",&ivalue);

    pattern(ivalue);
    return 0;
}