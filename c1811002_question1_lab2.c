//Ece Akdemir
//Lab 2
// QUESTION 1

#include <stdio.h>
#include <stdlib.h>
int main ()
{
   int *x,*y, *z;
   int a,b,i,s=0,swap;

   printf("Enter length of first array:");
   scanf("%d",&a);
   x = (int*) malloc(a * sizeof(int));
   printf("Enter numbers:");
   for(i=0;i<a;i++)
    scanf("%d",&x[i]);

   printf("\nEnter length of second array:");
   scanf("%d",&b);
   y = (int*) malloc(b * sizeof(int));
   printf("Enter numbers:");
   for(i=0;i<b;i++)
    scanf("%d",&y[i]);

   z = (int*) malloc((a+b) * sizeof(int));

   for(s=0;s<a;s++)
      z[s]=x[s];
      i=0;
   for(s=a;s<a+b;s++)
     {
       z[s]=y[i];
       i++;
     }

    //bubble sort

    for (i = 0 ; i < a+b - 1; i++)
    {
        for (s = 0 ; s < a+b - i - 1; s++)
        {
          if (z[s] > z[s+1])
          {
            swap       = z[s];
            z[s]   = z[s+1];
            z[s+1] = swap;
          }
        }
    }
    printf("\nMerged array:");
  for (i = 0; i < a+b; i++)
     printf("%d\n", z[i]);

   return 0 ;
}
