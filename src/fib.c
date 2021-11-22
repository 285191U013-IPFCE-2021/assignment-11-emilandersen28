/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int a, int b)
{
assert (n >= 0);
  /* post-condition */
  if(n == 0) 
    return a;
  else if(n == 1)
    return b;
  else
    return fib(n-1,b,b+a);
}