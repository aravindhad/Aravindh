 #include <stdio.h>
 
 int main()

 {

 int a,d,n,i,s;

 printf("First Term,a=");
 scanf("%d",&a);
 printf("Common difference,d=");
 scanf("%d",&d);
 printf("N term,n=");
 scanf("%d",&n);

 if(n==0)
 {
 a=0;
 d=0;
 }

 printf("Arithematic series upto n terms =\t%d\t",a);

 for(i=1;i<n;i++){
 s=a+d;
 printf("%d\t",s);
 a=s;
 }

 return 0;

 }
