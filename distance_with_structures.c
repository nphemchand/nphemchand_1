//WAP to find the distance between two points using structures and 4 functions.

#include<stdio.h>
#include<math.h>
struct point
{
    float a,b;
}
float distance(struct point A,struct point B)
{
  float d;
  d=sqrt(pow((A.a-B.a)+pow((A.b-B.b),2));
   return d;
}
int main()
{
    struct point A,B;
    printf("enter the points;\n");
    scanf("%f%f%f%f",& A.a,&A.b,&B.a,&B.b);
    printf("\n distance between point A(%f%f)and
B(%f%f) is %f\n",A.a,A.b,B.a,B.b,distance(A,B));
   return 0;
}
