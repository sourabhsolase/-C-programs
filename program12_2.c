#include<stdio.h>
#include <stdbool.h>
bool chkzero(int ino)
{
  int idigit=0;
  int izero=9;
if(ino==0)
{
    ino=ino;
}
if(ino<0)
{
    ino=-ino;
}

while(ino!=0)
{
    idigit=ino%10;
    if(idigit< izero)
    {
        izero=idigit;
    }
    ino=ino/10;   
} 
    if(izero==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int ivalue=0;
    bool bret=false;
    printf("enter number:");
    scanf("%d",&ivalue);
    bret=chkzero(ivalue);
    if(bret==true)
 {
    printf("it cotains zero");

 }
 else
 {
  printf("there is no zero");
 }

    return 0;
}