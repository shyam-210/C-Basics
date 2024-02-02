 #include <stdio.h>
int main()
{
int x=145,p1,*p2;
p1=&x;
p2=&p1;
printf("value of x is:%d\n",x);
printf("value of *p1 is:%d\n",*p1);
printf("value of *p1 is:%u\n",p1);
printf("value of *p2 is:%d\n",*p2);
printf("value of p2 is:%d\n",*p2);
return 0;
}