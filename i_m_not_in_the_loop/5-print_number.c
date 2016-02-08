#include "my_functions.h"

void print_number(int n)
{
  int i=1;
  long int x=1;

  char a='0',b;
  
  while (x<n)
    {
      if (i<9)
	x=x*10;
      else
	x=4294967296;
      i++;
    }

  if (i<10)
    {
      b = (char) (i+48);
      print_char(b);
    }
  else
    {
      a=(char) 49;
      b=(char) (i+38);
      print_char(a);
      print_char(b);
    }

  if (x==4294967296)
    {
      x=1000000000;
      print_char(n % x);
    }

  while (x>1)
    {
      x=x/10;
      print_char(n % x);
    }
}
