#include<stdio.h>

void display(char ch)
{
    while(ch!='Z','a')
    {
    if((ch>='A')&&(ch<='Z'))
    {
        printf("%c\t ",ch);
        ch++;
    }
    else if((ch>='a')&&(ch<='z'))
    {
        printf("%c\t",ch);
            ch--;
    }
    
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