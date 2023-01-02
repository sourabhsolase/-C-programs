#include<stdio.h>

int circlearea(float fradius)
{
    float PI=3.14;
    float area=0.0;
    area =PI*fradius*fradius;
    return area;
}

int main()
{
 float fvalue= 0.0f;
 double dret=0.00;
 printf("enter the radius :");
 scanf("%f",&fvalue);
 dret=circlearea(fvalue);
 printf("area of circle is :%f\n",dret);

    return 0;
}