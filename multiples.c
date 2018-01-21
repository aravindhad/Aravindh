# include <stdio.h> 

int main() 
{ 
 int i, n=40, d=5 ; 
 printf("Enter the limit : ") ; 
 printf("\nEnter the number : ") ; 
 printf("\nThe numbers divisible by %d are :\n\n", d) ; 
 for(i = 1 ; i <= n ; i++) 
  if(i % d == 0) 
   printf("%d\t", i) ; 
 return 0; 
}
