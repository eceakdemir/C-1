//Ece Akdemir
//201811002

//QUESTION 2

#include<stdlib.h>
#include <stdio.h>
int main()
{
    double *p,*undera,*abovea;
    int x,i,ua,aa,s=0,t=0;
    double avg=0.0;
    printf("How many Numbers? ");
    scanf("%d",&x);

    p=(double*)malloc(sizeof(int)*x);
    printf("Enter Numbers:");
    for(i=0;i<x;i++)
    {
        scanf("%lf",&p[i]);
        avg=avg+p[i];
    }
    avg=avg/x;
    printf("Average: %lf",avg);
    ua=0;
    aa=0;
    for(i=0;i<x;i++)
    {
        if(avg>p[i])
            ua++;
        else if (avg<p[i])
            aa++;
    }
    undera=(double*)malloc(sizeof(int)*ua);
    abovea=(double*)malloc(sizeof(int)*aa);
    s=0;
    t=0;
    for(i=0;i<x;i++)
    {
        if(avg>p[i])
        {
            undera[s]=p[i];
            s++;
        }
        else if (avg<p[i])
        {
            abovea[t]=p[i];
            t++;
        }
    }
    printf("\n1st extra array:");
    for(i=0;i<s;i++)
        printf("%lf ",undera[i]);

    printf("\n2nd extra array:");
    for(i=0;i<s;i++)
        printf("%lf ",abovea[i]);

    return 0;
}
