#include<stdio.h>

void display(char ch)
{
    if((ch>=97)&&(ch<=122))
    {
        printf("%c",ch-32 );
    }
    else
    {
        printf("%c",ch+32);
    }

}
int main()
{
    char cvalue='\0';
    printf("enter one character :");
    scanf("%c",&cvalue);

    display(cvalue);
    return 0;
}