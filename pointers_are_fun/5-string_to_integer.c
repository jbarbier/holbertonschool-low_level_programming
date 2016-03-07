#include <stdio.h>

int string_to_integer(char *s)
{
  char sign;			/* keep track of negative signs */
  int n;			/* integer to return, unsigned */

  sign = 0;
  n = 0;

  while (*s != '\0')
    {
      if (*s == '-')
	{
	  sign = (sign + 1) % 2; 	/* 0 means positive, 1 means negative */
	}
      if (*s >= '0' && *s <= '9')	/* if character is in [0-9] */
	{
	  n = n * 10 + (int)(*s - '0'); /* make it part of the int */
	}
      s++;
    }

  if (sign)
    return -n;
  return n;
}
