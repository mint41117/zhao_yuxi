#include<stdio.h>
int main()
{
float a, b, c;
scanf("%f%f%f",&a, &b, &c);
if (a+b>c&&a+c>b&&b+c>a)
{
if (a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
printf("��ֱ�������Σ�\n");
else
printf("����ֱ�������Σ�\n");
}
else
printf("���ܹ��������Σ�\n");
return 0;
}