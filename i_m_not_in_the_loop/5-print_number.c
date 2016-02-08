#include "my_functions.h"

void print_number(int n)
{
  int i=1; // initialize i at 1
  long int x=1; // initialize x at 1. had to make long or it wouldn't compile

  char a='0',b;
  
  while (x<n) // will determine how many digits the number is. handles case 0 as well.
    {
      if (i<9)
	x=x*10;
      else // special case where n is big enough that x will cause overflow
	x=4294967296; // this will guarantee that x does not exceed sizeof(int)
      i++;
    }

  if (i<10) // print the number of digits for n in base 10
    {
      b = (char) (i+48);
      print_char(b);
    }
  else // print the number of digits for n in base 10, if it exceeds 9 digits in length
    {
      a=(char) 49;
      b=(char) (i+38);
      print_char(a);
      print_char(b);
    }

  if (x==4294967296) // checks for special case and does this one manually
    {
      x=1000000000;
      print_char((char) ((n % x)+48)); // print the first digit in special case
    }

  while (x>1) // this loop will print digits until x is 1 and we will print the last digit
    {
      x=x/10;
      print_char((char) ((n % x)+48));
    }
}
