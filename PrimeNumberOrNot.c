
#include <stdio.h>

int main()
{int i;
    int Number;
    int Count=0;
    printf("\nEnter the Number");
    scanf("%d",&Number);
 printf("\nYou have entered the Number=%d",Number);
 
 for(i=2;i<Number;i++)
 {
        if(Number%i==0)   
       { ///printf("\nFactor=%d",i);
       Count++;
       }
     
 }
 if(Count>0)
 printf("\nThe number is Not Prime Number");
 else
 printf("\nThe number is Prime Number");
    return 0;
}
