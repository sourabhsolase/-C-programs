#include<stdio.h>
 double squaremeter(int ino)
{
   
    double area =0.0;
    area=0.0929*ino;
    return area;
}

int main()
{
   int ivalue =0;
   double dret=0.0f;
   printf("enter area in square feet :");
   scanf("%d",&ivalue);
   dret =squaremeter(ivalue);
   printf("squar meter of area is :%f",dret);
   return 0;
}