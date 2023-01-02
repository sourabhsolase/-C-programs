#include<stdio.h>
int dollartoinr(int ino)
{
  int imult=70;
   
    
       imult=imult*ino;
    
    return imult;
}

int main()
{
    int ivalue=0,iret=0;
    printf("enter number of USD :");
    scanf("%d",&ivalue);
    iret=dollartoinr(ivalue);
    printf("value in INR is :%d",iret);
    return 0;
}