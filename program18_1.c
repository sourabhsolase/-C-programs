#include<stdio.h>
void pattern(int ino)
{
    int icnt=0;
    char ch='A';
    for(icnt=1;icnt<=ino;icnt++)
    {
        printf("%c\t",ch);
        ch++;
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