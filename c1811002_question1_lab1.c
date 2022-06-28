//Ece Akdemir
//201811002


//QUESTION 1

#include<stdlib.h>
#include <stdio.h>

int isPointedArray(int p[], int x)
{
int s=0,u=0;
while(s<x+1)
{
    u=p[u];
     if(u==0)
        break;
    s++;

}
if(s==(x))
    return 1;
else
    return 0;
}

int main()
{
int x,i, m,t;
int *p;
for(t=1;t<3;t++)
{
printf("\nEnter the amount numbers:");
scanf("%d",&x);
p=(int*)malloc(sizeof(int)*x);
printf("\nEnter the values:");
for(i=0;i<x+1;i++)
    scanf("%d",&p[i]);

m=isPointedArray(p,x);
if(m==1)
 printf(" A Loop is formed");
else
printf(" NO Loop is formed");
}

return 0;
}
