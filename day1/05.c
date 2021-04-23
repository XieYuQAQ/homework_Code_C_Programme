#include <stdio.h>
#include <math.h>
int main()
{
    int num,num1,num2;
    for(num=0;num<=100000;num++)
    {
        num1=sqrt(num+100);
        num2=sqrt(num+268);
        if(num1*num1==num+100&&num2*num2==num+268)
            {
                printf("%d\n",num);
                break;
            }
    }

    return 0;
}
