//Bismillah
//This program is to check the given number is prime or not
// code is developed by A. R. Ansari, Parbhani, Maharashtra,India.
// for any bug pls report to ansarirahim1@gmail.com
// code is designed for linux as well as windows ..just we need to change macro __WINDOWS__ or __LINUX__

//Prime numbers are positive, non-zero numbers that have exactly two factors -- no more, no less.
#include <stdio.h> // for accepting input from keyboard and to display on the screen //has defination of  standard input and output function

//#include <conio.h> //clear screen
#include <stdlib.h> //clear screen
#include <ctype.h>  // to check alphanumeric or not
#include "stringC.h"

int main()
{
   //int inValid=0;
   //int i, j;
   //int Number;
   //int Count = 0;
   char numberString[20];

   //clrscr();
   // //for linux
   ClearScreen(__LINUX__);
   //for windows
   printf("\nPrime numbers are positive, non-zero numbers that have exactly two factors -- no more, no less.\n");

   printf("\nEnter the Number\n");
   gets(numberString);
   trimLeading(numberString);
   checkPrimeNumberInArray(numberString);
   return 0;
}
