#include<stdio.h>
int countsix(int ino)
{
   int idigit=0;
   int icnt=0;
   int d=6;
   
   while(ino>0)
   {
   
     idigit=ino%10;
      ino=ino/10;
if(idigit<d)
{
       icnt++;
}  
}
return icnt;
}

int main()
{
    int ivalue=0;
 int iret=0;
 
 printf("enter number :");
 scanf("%d",&ivalue);
 iret=countsix(ivalue);
 printf("%d",iret);
    return 0;
}
