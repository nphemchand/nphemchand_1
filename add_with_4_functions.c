//Write a program to add two user input numbers using 4 functions.

#include<stdio.h>
float input()
{
  float n;
  printf(“\n enter number:”);
  scanf(“%f”,&n);
  return n;
}
  float sum (float a,float b)
{
   float sum ;
   sum=a+b;
   return sum;
}
void output (float n)
{
  printf(“\n the sum is %f”.n);
}
  Int main()
{
  float x,y,z;
  x=input();
  y=input();
  z=input(x,y);
  output(z);
  return0;
}
