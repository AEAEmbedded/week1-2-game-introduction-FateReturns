#include <stdio.h>
/*
 * First assignment for creating a game
 * (c) HAN, Ashley de Ridder REMARK: Change this name to your own
 * This is the first part of the game
 * It display's a welcome screen and instructions
 */

int main(void)
{
   char name[30] = "<Ashley's Guessing game>";
   int NumberOfGeusses = 5;
   printf("Welcome to the guessing game!\n");
   // This is just a start, add all the lines as mentioned in the assignment
   printf("The object of the game is to guess the secret number.\n");
   printf("You get %d chances for that.\n", NumberOfGeusses);
   printf("To address you personally, I would like to know your name.\n");
   printf("What is your name:\n");
   printf("Great <name>, let's get started.\n");
   printf("There is a secret number between 0 and 100, what is your first try:");

   return 0;
}
