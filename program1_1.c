#include<stdio.h>
int divide(int iNo1,int iNo2)
{
    int iAns=0;
    if(iNo2==0)
    {
        return-1;
    }
    iAns=iNo1/iNo2;
    return iAns;
}

int main()
{
    int iValue1=15,iValue2=5;
    int iRet=0;

    iRet=divide(iValue1,iValue2);

    printf("division is %d",iRet);

    return 0;

}