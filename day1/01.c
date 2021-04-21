//输入数值检查是否能被3，5，7整除。如果能则检查能被一个还是两个数字整除，并输出被整除的数字。
#include <stdio.h>
int main()
{
    int num,a,c;//num用于输入数值，a用于判断是否整除，c用于累计数值
    scanf("%d",&num);
    a=0;
    a+=(num%3==0);
    a+=(num%5==0);
    a+=(num%7==0);
    c=3;
    //printf("%d",a);这里用于检查a值用
    if(a>0)
        {
            if(a==3)
                printf("能同时被3，5，7整除。");
            else if(a==2)
                {
                    printf("能被其中两数整除。");
                    while(c<=7)
                        {
                            if(num%c==0)
                                printf("(%d)",c);
                            c+=2;   
                        }
                }
            else if(a==1)
                {
                    printf("能被其中一个数整除。");
                    while(c<=7)
                        {
                            if(num%c==0)
                                printf("(%d)",c);
                            c+=2; 
                        }
                }
        }
    else
        printf("不能被任何一个整除。");
    return 0;
}
