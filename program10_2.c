#include<stdio.h>
int rectarea(float fwidth,float fheight)
{
    float area=0.0;
    area=fwidth*fheight;

  return area;
}

int main()
{
    float fvalue1=0.0,fvalue2=0.0;
    double dret=0.0;
    printf("enter the width :");
    scanf("%f",&fvalue1);
 printf("enter the height :");
    scanf("%f",&fvalue2);

    dret=rectarea(fvalue1 ,fvalue2);
printf("area of rectangle is :%f",dret);
return 0;

}
