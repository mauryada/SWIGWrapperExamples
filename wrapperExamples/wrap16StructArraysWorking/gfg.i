
/* file : gfg.i */
  
/* name of module to use*/
%module gfg 
%{ 
    /* Every thing in this file is being copied in  
     wrapper file. We include the C header file necessary 
     to compile the interface */
    


    #include "gfg.h"

  
    /* variable declaration*/
    double myvar; 
    //foo bar;
%} 

%include "gfg.h"
    %{
    	//foo bar;
    %} 
  
/* explicitly list functions and variables to be interfaced */
/* REMOVE LATER 
double myvar; 
int a[100];
long long int fact(long long int n1); 
int my_mod(int m, int n);
void populate_a();
*/  


/* or if we want to interface all functions then we can simply 
   include header file like this -  
   %include "gfg.h" 
*/



/*
https://stackoverflow.com/questions/47949918/swig-how-to-pass-a-vector-of-complex-numbers-from-c-to-python
*/

/*%include "std_vector.i"*/

%include <complex.i>
/*
namespace std {
    %template(ComplexDouble) complex<double>;
}
*/

/*    %template(ComplexVector) vector<std::complex<double>>; */







%include "gfg.h"  // REMOVE LATER
/*
%inline %{
int a[100];
void a_set(int i, int val) {
  a[i]= val;
}
int a_get(int i) {
  return a[i];
}
%}
*/

// Some array helpers
%inline %{
  /* Create any sort of [size] array */
  int *int_array(int size) {
    return (int *) malloc(size*sizeof(int));
  }
%}