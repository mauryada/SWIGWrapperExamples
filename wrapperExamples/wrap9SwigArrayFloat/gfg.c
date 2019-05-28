
/* file : gfg.c */
  
#include <stdio.h> 
#include <math.h> 
  
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

float * getRandom( ) {

   static float  r[10];
   int i;

  
   for ( i = 0; i < 10; ++i) {
      r[i] = i;
      printf( "r[%d] = %d\n", i, r[i]);
   }

   return r;
}

