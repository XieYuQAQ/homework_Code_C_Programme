//1,2,3,4 不重复，统计个数，输出数字。
#include <stdio.h>
int main()
{
    int a,b,c,num=0;
    for(a=1;a<5;a++)
        for(b=1;b<5;b++)
            for(c=1;c<5;c++)
                if(a!=b&&a!=c&&b!=c)
                    {
                        printf("%d%d%d\n",a,b,c);
                        num++;
                    }
    printf("共%d个\n",num);
    return 0;
}
