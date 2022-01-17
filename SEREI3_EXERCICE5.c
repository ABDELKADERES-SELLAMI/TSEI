#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
int i,n;
float a,b,p;
float s,T;
printf("donner le nombre de trapeze n");
scanf("%d",&n);
printf("donner a et b");
scanf("%f%f",&a,&b);
T=fonc(a,b,s,p);
printf("la surface du trapeze est %f\n",T);
system("color 3E");// LA SURFACE DU TRAPEZE T
}
void fonc(float a,float b,float p)
{
   int i,n;
   float s;
   float f(float x){
return sqrt ((1-x)*(1-x));}
   p=(b-a)/n;
   s=0;
   for(i=1;i<=n;i++){
    s=s+((f(a)+f(a+p))*p/2);
    a=a+p;
   }
   printf("\n-------------------------\n");
   printf("la surface est %f\n",s);
   return 0;
}
