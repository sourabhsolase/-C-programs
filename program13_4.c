#include<stdio.h>
int multdigit(int ino)
{
    int imult=1;
 int idigit =0;
 if(ino<0)
 {
    ino=-ino;
 }
 if(ino==0)
 {
     1;
 }
 
 while(ino!=0)
 {
    idigit=ino%10;
     imult=imult*idigit;
    ino=ino/10;
   
    
 } 
 return imult;
}

int main()
{
    int ivalue=0;
    int iret=0;
    printf("enter number :");
    scanf("%d",&ivalue);

   iret= multdigit(ivalue);
   printf("%d",iret);
   return 0;
}