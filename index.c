#include <stdio.h>
#include <stdlib.h>

// RETURN STATEMENT IN C PROGRAMMING

double cude(double num){
    double result = num * num * num;
    return result;


}
int main()
{
    printf(" Answer: %f", cude(3.0));
   /** char characterName[] = "kamau";
    int characterAge = 85;
    printf("There once was a man named %s\n", characterName);
    printf("he was %d years old.\n", characterAge);

    characterAge = 25;

    printf("He really liked the name %s\n",characterName);
    printf("but did not like being %d.\n", characterAge);**/

    //PRINTING NUMBERS AND STRING

    /**printf("My favorite %s is %d","Number", 12);

     PRINTING FLOAT

    printf("The price of white flour is now ksh %f. The price is increasing everyday", 250.90);**/

    //Mathematical operation
   /** printf("There are %d students who attended C programming class", 2 + 8);**/

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

   // BUILDING A BASIC CALCULATOR

  /** double num1;
   double num2;
   printf("Enter the first number: ");
   scanf("%lf", &num1);
   printf("Enter the second number: ");
   scanf("%lf", &num2);
   printf("Answer: %f", num1 + num2);**/

   // BUILDING A MAD LIBS GAME

   /**char color[20];
   char pluralNoun[20];
   char celebrityF[20];
   char celebrityL[20];

   printf("Enter your favorite color: ");
   scanf("%s", color);
   printf("Enter your plural noun: ");
   scanf("%s", pluralNoun);
   printf("Enter your favorite celebraty: ");
   scanf("%s%s", celebrityF,celebrityL);

   printf("Roses are %s\n", color);
   printf("%s are blue\n", pluralNoun);
   printf("I love %s %s\n", celebrityF, celebrityL);**/

   // WORKING WITH FUNCTIONS

  /** sayHi("Mike", 40);
   sayHi("Joseph", 23);
   sayHi("Jemimah", 20);

**/

    return 0;
}

/**void sayHi (char name[], int age){
    printf("Hello %s, You are %d\n", name, age);**/




//}
