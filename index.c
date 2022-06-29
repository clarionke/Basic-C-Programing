#include <stdio.h>
#include <stdlib.h>

int main()
{
   /** char characterName[] = "kamau";
    int characterAge = 85;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    characterAge = 25;

    printf("He really liked the name %s\n",characterName);
    printf("but did not like being %d.\n", characterAge);**/

    //PRINTING NUMBERS AND STRING

    //printf("My favorite %s is %d","Number", 12);

    // PRINTING FLOAT

    //printf("The price of white flour is now ksh %f. The price is increasing everyday", 250.90);

    //Mathematical operation
   // printf("There are %d students who attended C programming class", 2 + 8);

   // GETTING INPUT FROM THE USER.
  /** int age;
   printf("Enter Your Age: ");
   scanf("%d", &age);
   printf("Your are %d Years old", age);
   **/
   /**char name[20];
   printf("Enter Your name: ");
   fgets(name,30, stdin);
   printf("Your name is %s", name);**/

   double num1;
   double num2;
   printf("Enter the first number: ");
   scanf("%lf", &num1);
   printf("Enter the second number: ");
   scanf("%lf", &num2);
   printf("Answer: %f", num1 + num2);

    return 0;
}
