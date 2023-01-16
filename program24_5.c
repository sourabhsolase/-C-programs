#include<stdio.h>
void display(char ch)
{
        printf(" ASCII %d\t hexadecimal %x\t octal %o\t ",ch,ch,ch);  
}
int main()
{
      char cvalue='\0';
    printf("enter one character :");
    scanf(" %c",&cvalue);

    display(cvalue);
    return 0;
}