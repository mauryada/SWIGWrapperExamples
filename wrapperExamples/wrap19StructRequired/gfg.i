

/* file : gfg.i */
  
/* name of module to use*/
%module gfg 
%{ 
    /* Every thing in this file is being copied in  
     wrapper file. We include the C header file necessary to compile the interface */

    #include "gfg.h"

%} 


%include "gfg.h" //REMOVE LATER

%include <complex.i>

%array_functions(double, doubleArray);