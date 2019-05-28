
/* file : gfg.c */
  
#include <stdio.h> 
#include <math.h> 
#include <complex.h>
  
//our header file 
#include "gfg.h" 
#define ll long long 
  
double myvar = 3.4; 
  
// calculate factorial 
ll int fact(ll int n) 
{ 
    if(n <= 1) 
        return 1; 
    else
        return (n * fact(n-1)); 
} 
  
//find mod 
int my_mod(int n, int m) 
{ 
  return(n % m); 
} 


double complex complexTest()
{
    double complex z1 = 1.0 + 3.0 * I;
    return z1;
}
