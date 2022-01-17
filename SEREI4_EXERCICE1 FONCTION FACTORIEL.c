/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int
factoriel (int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return n * factoriel (n - 1);
}

int
main ()
{
  int n, i;
  float s;
  printf ("veuillez saisir la valeur de n\n");
  scanf ("%d", &n);
  s = 0;
  for (i = 1; i <= n; i++)
    {
      s = (s + (float) factoriel (i)) / factoriel (n);
    }
  printf ("le factoriel de %d / %d est %f:\n", factoriel (i), factoriel (n),
	  s);
  return 0;
}
