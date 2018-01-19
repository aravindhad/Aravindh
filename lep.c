#include <stdio.h>

int acd;
  printf ("Enter a year \n");
  scanf ("%d", &acd);

  if (acd%4 == 0) {

      if(acd%100 == 0) {
      
          if(acd%400 == 0)
             printf("\n It is LEAP YEAR.");
          else
             printf("\n It is NOT LEAP YEAR.");
      }

      else {
             printf ("\n It is LEAP YEAR.");
      }
  }
  else
      printf("\n It is NOT LEAP YEAR.");
  
return 0;
