//Ece Akdemir
//201811002
//QUESTION 2

#include<stdio.h>
#include <string.h>
struct books
{
    char title[50];
    char author[50];
    int year;
    char genre[50];
};

int main()
{
   struct books *x;
   int a,i,b,keepi,countyear=0,countauthor=0,countgenre=0;
   char keep[50];
   printf("Enter number of books:");
   scanf("%d",&a);
   x = (int*) malloc(a * sizeof(struct books));

   for(i=0;i<a;i++)
   {
       printf("\n\n%d - book title:",i+1);
       scanf("%s",&x[i].title);
       printf("%d - book author:",i+1);
       scanf("%s",&x[i].author);
       printf("%d - book year:",i+1);
       scanf("%d",&x[i].year);
       printf("%d - book genre:",i+1);
       scanf("%s",&x[i].genre);
   }
   printf("\nDisplay books by:\n1. Author\n2. Year\n3. Genre");
   printf("\nEnter your choice:");
   scanf("%d",&b);
   if(b==1)
   {
      printf("Enter Author:");
      scanf("%s",&keep);
      for(i=0;i<a;i++)
      {
         if (strcmp(keep,x[i].author) ==0)
            countauthor++;
      }
      printf("Number of %s author books: %d",keep,countauthor);
   }

   else if(b==2)
   {
      printf("Enter Year:");
      scanf("%d",&keepi);
      for(i=0;i<a;i++)
      {
        if(keepi==x[i].year)
            countyear++;
      }
      printf("Number of %d year books: %d",keepi,countyear);
   }

   else if(b==3)
   {
      printf("Enter genre:");
      scanf("%s",&keep);
      for(i=0;i<a;i++)
      {
         if (strcmp(keep,x[i].genre) ==0)
            countgenre++;
      }
      printf("Number of %s genre books: %d",keep,countgenre);
   }

   else
    printf("\ninvalid entry");

   return 0;
}
