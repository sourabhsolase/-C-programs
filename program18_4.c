#include<stdio.h>
void pattern(int ino)
{
    int icnt=0;
    
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%d\t*\t#\t",icnt);
        
    }
printf("\n");
}
int main()
{
    int ivalue=0;
    printf("enter number :\n");
    scanf("%d",&ivalue);

    pattern(ivalue);
    return 0;
}