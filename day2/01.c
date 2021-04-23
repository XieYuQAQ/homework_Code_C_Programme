#include <stdio.h>
int main()
{
    int i,m1,m2,m3,m4,m5;
    double m;
    scanf("%d",&i);
    m1=100000*0.1;
    m2=m1+100000*0.075;
    m3=m2+200000*0.05;
    m4=m3+200000*0.03;
    m5=m4+400000*0.015;
    if(i<=100000)
        m=i*0.1;
    else if(i<=200000)
        m=m1+(i-100000)*0.075;
    else if(i<=400000)
        m=m2+(i-200000)*0.05;
    else if(i<=600000)
        m=m3+(i-400000)*0.03;
    else if(i<=1000000)
        m=m4+(i-600000)*0.015;
    else if(i>1000000)
        m=m5+(i-1000000)*0.01;
    printf("%f\n",m);
    return 0;
}
