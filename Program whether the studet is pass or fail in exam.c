/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void
main ()
//Writing the program to find whether the student is pass or fail in the exams if it requires total 40% and at least 33%in each subject to pass
{
  int Physics, Mathematics, Chemistry;
  float Total;
  printf ("Enter the marks obtained in Physics\n");
  scanf ("%d", &Physics);
  printf ("Enter the marks obtained in Mathematics\n");
  scanf ("%d", &Mathematics);
  printf ("Enter marks obtained in Chemistry\n");
  scanf ("%d", &Chemistry);
  Total = (Physics + Mathematics + Chemistry) / 3;
  if ((Total < 40) || Mathematics < 33 || Physics < 33 || Chemistry < 33)

    {
      printf ("Your total Percentage is %f and you are fail ", Total);
    }
  else
    {
      printf ("Your total Percentage is %f and you are pass ", Total);
    }

}
