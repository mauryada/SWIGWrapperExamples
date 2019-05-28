
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

int * getRandom( ) {

   int *r = (int *)malloc(9);

   for (int i =0; i < 10; i++)
   {
	r[i] = i;
	printf("this is %d \n", r[i]);
   }
   

   return r;
}


int main()
{

	int * x = getRandom();
	for (int i = 0; i<10; i++){
		printf("this is 2%d \n", x[i]);
	}
	return 0;
}
