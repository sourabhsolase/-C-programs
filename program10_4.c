#include<stdio.h>
int fhtocs(float ftemp)
{
    float celsius=0.0;
    celsius=(ftemp-32)*5/9;
    return celsius;
}

int main()
{
    float fvalue =0.0;
    double dret=0.0;
    printf("enter temperature in farenheit : ");
    scanf("%f",&fvalue);

    dret=fhtocs(fvalue);
    printf("tempreture in celsius is :%f",dret);
    return 0;
}