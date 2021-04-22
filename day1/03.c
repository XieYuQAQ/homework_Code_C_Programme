//45600亿元，每年8%增长，翻两番需要多少年。
#include <stdio.h>
int main()
{
    float s=45600,d=0.08;
    int n;
    n=0;
    while(s<45600*4)
    {
        s=s+s*d;
        n++;
        printf("%d\n",s);
    }
    printf("%d",n);
}
