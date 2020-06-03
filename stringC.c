#include<stdio.h>
#include<stdlib.h>
void trimLeading(char *s)
{
	int i,j;
	for(i=0;s[i]==' '||s[i]=='\t';i++);
 
	for(j=0;s[i];i++)
	{
		s[j++]=s[i];
	}
	s[j]='\0';  
}
int checkAnyNonNumericCharInArray(char *s){
    int inValid=0;
    int j=0;
while(s[j]!='\0'){
   if (((!(s[j]>=0x30 && s[j]<=0x39)))||(s[j] >= 97 && s[j] <= 122) || (s[j] >= 65 && s[j] <= 90))
   {
      
      inValid=1;
      printf("\nThe entered number is not integer and contains one or more  non-numeric type characters");
      break;
   }
 
   j++;
}
return inValid;
}

void checkPrimeNumberInArray(char *numberString)
{
int Number;
int i=0;
int Count=0;
    if(!checkAnyNonNumericCharInArray(numberString))
  
   {

      Number = atoi(numberString);

      printf("\nYou have entered the Number=%d", Number);
      if (Number < 3)
      {
         switch (Number)
         {
         case 0:
            printf("\n 0 is not a valid Number");
            break;
         case 1:
            printf("\n  1 is not prime by definition!");
            break;
         default:
            printf("\n%d is not a valid number!  Try again!", Number);
         }
         printf("\nPlease note : Prime numbers are positive,non-zero numbers that have exactly two factors -- no more, no less.\n");
         
      }
      else
      {
         for (i = 2; i < Number; i++)
         {
            if (Number % i == 0)
            { ///printf("\nFactor=%d",i);
               Count++;
            }
         }
         if (Count > 0)
            printf("\n\nThe Entered Number is Not A Prime Number\n");
         else
            printf("\n\nThe Entered Number is A Prime Number\n");
      }
   }
}

void ClearScreen(int os)
{
     switch(os)
   {
      case 0 :system("cls");
      break;
      case 1:
      system("clear");
      break;
   }
}
