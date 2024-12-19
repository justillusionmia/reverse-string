#include <stdio.h>
#include <stdlib.h>

int main() {

   char word[20];
   char rev[20];
   int i = 0;
   int k = 0;
   int length;

   printf("Enter ONE word: ");
   scanf("%s" , word);
   getchar();

   printf("Your string is \"%s\"" , word);

   // calculate string length
   while (word[i] != '\0') {
       i++;
   }

   length = i;

   printf("\nThe length of your string is: %d characters", length);

   // reverse string
   for(i = length - 1 ; i >= 0; i--) {
       rev[k] = word[i];
       k++;
   }



   printf("\nYour string in reverse is: %s", rev);

   return 0;
}
