//WAP to find the volume of a tromboloid using 4 functions.

#include<stdio.h>
Float input(char a)
{
  Float n;
  printf(“enter the value of %c:”,a);
  scanf(“%f”,&n);
  Return n;

}
Float volume(float h,float d ,float b)
{
  Float volume=((h*d*b)+(d/b))/3);
  Return volume;
}

Void output(float v)
{

   printf(“/n the volume of tromboliod is%f”,v);
}
int main(  )
{
  Float h,d,b,v;
  h=input(h);
   d=input(d);
   b=input(b);
   v=volume(h,d,b);
   output(v);
   Return 0;
}
