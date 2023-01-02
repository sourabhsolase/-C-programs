#include<stdio.h>
int kmtometer(int ino)
{
    int meter =0;
   int kilometer=1000;
    meter=ino*kilometer;
     return meter;
}
int main()
{
    int ivalue=0;
    int iret=0;
    printf("enter distance :");
    scanf("%d",&ivalue);
    iret=kmtometer(ivalue);
    printf("distance in meter is:%d",iret);
}