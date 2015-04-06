#include <stdio.h>
#include <string.h>
#define MAXSIZE 100
int main()
{
   char a[MAXSIZE], b[MAXSIZE];

   printf("Enter the first string\n");
   fgets(a,MAXSIZE,stdin);

   printf("Enter the second string\n");
   fgets(b,MAXSIZE,stdin);

   if (strcmp(a,b) == 0)
      printf("Entered strings are equal.\n");
   else
      printf("Entered strings are not equal.\n");

   return 0;
}
