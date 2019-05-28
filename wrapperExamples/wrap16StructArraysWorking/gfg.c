
/* file : gfg.c */
  
#include <stdio.h> 
#include <math.h> 

#include <string.h>

  
//our header file 
#include "gfg.h" 
#define ll long long 
 

#include <complex.h>    /* Standard Library of Complex Numbers \\*/





double myvar = 3.4; 
char *test_string = "this is a test string";


double complex a[100];

bar structTest;



void sturctVarPopulate()
{
	for (int i = 0; i < 5; i++)
	{
		structTest.x[i] = i*7;
	}
}

int getStructVar(int i)
{
	return structTest.x[i];
}

void setStructVar(int i, int val)
{
	structTest.x[i] = val;
}

void populate_a()
{
    for (int i = 0; i < 100; i++)
    {
        double j = (double)i/29;
        double k = j*2;
        k += 1;
        double complex val = j + k * I;

        a[i] = val;

        if (i < 10)
        {
            printf("j = %.2f /t k = %.2f \n", j, k);
        }
    }
} 


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


void a_set(int i, double complex val) {
  a[i]= val;
}
double complex a_get(int i) {
  return a[i];
}

char *get_str()
{
  return test_string;
}