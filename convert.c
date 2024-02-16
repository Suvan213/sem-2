#include <stdio.h>
int main() {
   char uppercaseletter, lowercaseletter;

   printf("Enter an uppercase letter: ");
   scanf("%c", &uppercaseletter);
   if (uppercaseletter >= 'A' && uppercaseletter <= 'Z') {
       lowercaseletter = uppercaseletter ^ 32;

       printf("The lowercase letter is: %c\n", lowercaseletter);
   } else {
       printf("Invalid input! Please enter an uppercase letter.\n");
   }

   return 0;
}