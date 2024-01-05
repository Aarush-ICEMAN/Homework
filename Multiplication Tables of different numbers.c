
#include <stdio.h>
int
main ()
{
  int mul[20],i;
  for (i = 0; i < 20; i++)
    {

      mul[i] = 24 * (i + 1);

    }
   
  for (i = 0; i < 20; i++)
    {
      printf ("\n 24X%d=%d\n", i + 1, mul[i]);

    }
  printf ("\n**************************************************\n");


  for ( i = 0; i < 20; i++)
    {
      mul[i] = 56 * (i + 1);

    }
    
  for (i = 0; i < 20; i++)
    {
      printf (" \n 56 X % d = %d \n  ", i + 1, mul[i]);
    }
  return 0;


}

