/* file : test.c */
  
#include <stdio.h> 
#include <math.h> 
  
//our header file 
#include "test.h" 
#define ll long long 


int a[100];



// foo bar;

void pop_a()
{
	for (int i = 0; i < 100; i++)
	{
		a[i] = i;
	}
}

void pop_bar(bar val)
{
	for (int i = 0; i < 6; i++)
	{
		val.x[i] = (i*3);
	}
}


// extern foo bar;

int main()
{

	pop_a();
	printf("a = %d \n", a[10]);

	bar bar1;
	// foo bar;
	bar1.a = 11;
	pop_bar(bar1);
	printf("bar.a = %d \n", bar1.a);
	printf("bar.x[2] = %d \n", bar1.x[2]);
}