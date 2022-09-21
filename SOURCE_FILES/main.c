#include <stdio.h>
#include <string.h>
int main() {
  char s[100];
   int i =1;
   printf("\nEnter a string : ");
   gets(s);
   while (s[i]!=NULL)
   {
       if(s[i] >= 'a' && s[i] <= 'z') {
         s[i] = s[i] -32;
      }
      i=i+2;
   }
   printf("\nString in Upper Case = %s", s);
    return 0;
}
