#include<stdio.h>
 int mult(int ino1,int ino2,int ino3)
 {
    int imult=0;

    imult=ino1*ino2*ino3;

    

    return imult;
 }
 int main()
 {
    int ivalue1=0,ivalue2=0,ivalue3=0,iret=0;
    printf("please enter three number :\n");
    scanf("%d%d%d",&ivalue1,&ivalue2,&ivalue3);

    iret=mult(ivalue1,ivalue2,ivalue3);
printf("multiplication is :%d\n",iret);
return 0;
 }