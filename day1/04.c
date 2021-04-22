//成绩转换 100-90:A 80-79:B 70-79:C 60-69:D 60以下E
#include<stdio.h>
int main()
{
    double num;
    scanf("%lf",&num);
    num=(int)num/10;
    switch((int)num)
    {
        case 10:
        case 9:printf("成绩为:A\n");break;
        case 8:printf("成绩为:B\n");break;
        case 7:printf("成绩为:C\n");break;
        case 6:printf("成绩为:D\n");break;
        case 5: case 4: case 3: case 2: case 1:printf("成绩为:E\n");break;
        default:printf("输入的数值非法\n");break;
    }
    return 0;
}
