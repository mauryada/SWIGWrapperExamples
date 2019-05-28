#include <complex.h>

// void populate_a();
// long long int fact(long long int n); 
// int my_mod(int n, int m); 

// void a_set(int i, double complex val);

// double complex a_get(int i);

// char *get_str();
// double complex complexTest();

typedef struct foo
{
	char *shape;// = "rect";
	double width;// = 7e-4;
	double height;// = 0.0150;
	int amplitude;// = 1;
	int phase;// = 0;
	int time_delay;// = 0;
	double center[2];// = {-0.0034, 0, 0};
    double euler[3];// = {0,0,0};

    double complex extraComplex;
    double complex extraComplexArray[5];


} xdcr_array;

void setArrayPos(double* arr, int pos, double val);
double getArrayPos(double* arr, int pos);

void setComplexArrayPos(double complex* arr, int pos, double complex val);
double complex getComplexArrayPos(double complex* arr, int pos);

// bar sturctVarPopulate(bar val);
// int getStructVar(bar val, int i);
// bar setStructVar(bar val, int i, int value);
// extern foo bar;
