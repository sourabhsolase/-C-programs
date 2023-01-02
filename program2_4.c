#include<stdio.h>
void display(int ino,int ifrequency)
{
    int i =0;
    for(i=1;i<=ifrequency;i++)
    {
        printf("%d \t",ino);
    }
}
int main()
{
    int iValue=0;
    int icount=0;

    printf("enter number");
    scanf("%d",&iValue);

    printf("enter frequency" );
    scanf("%d",&icount);
    display(iValue,icount);

    return 0;

}