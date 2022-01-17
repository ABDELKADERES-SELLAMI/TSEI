/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float
F_n (int n)
{
  char alpha;
  int k;
  float s;
  for (k = 1; k <= n; k++)
    {
      s =
	s +
	(float) (pow (k, 1 / n) *
		 (pow (n, alpha - 1 / n) + pow (k, alpha - 1 / n)));
      return s / pow (n, alpha + 1);
    }
}

int
main ()
{
  int n;
  float SM;
  printf ("donner la valeur de n\n");
  scanf ("%d", &n);
  SM = F_n (n);
  printf ("la valeur de U est %f", SM);
  system ("color 3E");
  return 0;
}
