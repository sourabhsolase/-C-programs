#include<stdio.h>
float percentage(int ino1,int ino2)
{
    float fper=0.0;
    fper=(ino2*100)/ino1;
    return fper;
}
int main()
{
    int ivalue1=0,ivalue2=0;
    float fret=0.0;

    printf("please enter total marks :\n");
    scanf("%d",&ivalue1);

    printf("please enter obtained marks :\n");
    scanf("%d",&ivalue2);
fret=percentage(ivalue1,ivalue2);
printf("percentage is :%f\n",fret);
return 0;

}