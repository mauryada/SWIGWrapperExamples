#include <complex.h>

void populate_a();
long long int fact(long long int n); 
int my_mod(int n, int m); 

void a_set(int i, double complex val);

double complex a_get(int i);

char *get_str();
// double complex complexTest();

typedef struct foo
{
    int a;
    int x[5];
} bar;
bar sturctVarPopulate(bar val);
int getStructVar(bar val, int i);
bar setStructVar(bar val, int i, int value);
// extern foo bar;