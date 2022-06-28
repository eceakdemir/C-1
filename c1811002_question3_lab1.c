//Ece Akdemir
//201811002

//QUESTION 3

#include<stdio.h>
int main ()
{
    int x;
    char *c1, *c2, *c3, *c4;
    int a;
    printf("Enter an integer:");
    scanf("%d",&x);
    printf("The integer is %d",x);
    c1=&x;
    c2=c1+1;
    c3=c2+1;
    c4=c3+1;
    printf("\n\nThe values are c1=%d  c2=%d  c3=%d  c4=%d ",*c1,*c2,*c3,*c4);

    printf("\n\nEnter c1:");
    scanf("%d",&a);

    *c1=a;

    printf("Enter c2:");
    scanf("%d",&a);

    *c2=a;

    printf("Enter c3:");
    scanf("%d",&a);

    *c3=a;

    printf("Enter c4:");
    scanf("%d",&a);

    *c4=a;

    printf("\nNew value = %d",x);

   return 0;
}
