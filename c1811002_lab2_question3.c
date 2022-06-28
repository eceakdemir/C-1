//Ece Akdemir
//201811002
//QUESTION 2

#include<stdio.h>
struct st
{
    int a;
    double b;
    int c[5];
    double d[5];
};

int main()
{
   struct st keep;
   int *x,*y;
   double *p,*k;
   x=&keep.a;
   p=&keep.b;
   y=&keep.c;
   k=&keep.d;

   *x=22;
   *p=3.77;
   *y=9;
   *(y+1)=8;
   *(y+2)=7;
   *k=9.77;
   *(k+1)=8.77;
   *(k+2)=7.77;

   printf("\ninteger: %d",keep.a);
   printf("\ninteger array: %d %d %d ...",keep.c[0],keep.c[1],keep.c[2]);
   printf("\ndouble: %lf",keep.b);
   printf("\ndouble array: %lf %lf %lf ...",keep.d[0],keep.d[1],keep.d[2]);
   return 0;
}
