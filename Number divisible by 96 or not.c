/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void
main ()
{
  //Writing a program to check wheteher is number is divisible by 96 or not //
  int a;
  printf ("Enter the number\n");
  scanf ("%d", &a);
  if (a % 96 == 0)
    {
      printf ("%d is divisible by 96\n", a);

    }
  else
    {
      printf ("%dis not divisible by 96\n", a);

    }
}
