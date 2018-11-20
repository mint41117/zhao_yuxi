#include<stdio.h>
int main()
{
float a, b, c;
scanf("%f%f%f",&a, &b, &c);
if (a+b>c&&a+c>b&&b+c>a)
{
if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
printf("是直角三角形！\n");
else
printf("不是直角三角形！\n");
}
else
printf("不能构成三角形！\n");
return 0;
}
