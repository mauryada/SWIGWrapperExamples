#include <stdio.h>      /* Standard Library of Input and Output */
#include <complex.h>    /* Standard Library of Complex Numbers \\*/


double complex a[100];

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


double complex testingFunc()
{
	double complex z1 = 2.0 + 7.0 * I;
	return z1;
}


int main() {

    double complex z1 = testingFunc();
    double complex z2 = 1.0 - 4.0 * I;

    printf("Working with complex numbers:\n\v");

    printf("Starting values: Z1 = %.2f + %.2fi\tZ2 = %.2f %+.2fi\n", creal(z1), cimag(z1), creal(z2), cimag(z2));

    double complex sum = z1 + z2;
    printf("The sum: Z1 + Z2 = %.2f %+.2fi\n", creal(sum), cimag(sum));

    double complex difference = z1 - z2;
    printf("The difference: Z1 - Z2 = %.2f %+.2fi\n", creal(difference), cimag(difference));

    double complex product = z1 * z2;
    printf("The product: Z1 x Z2 = %.2f %+.2fi\n", creal(product), cimag(product));

    double complex quotient = z1 / z2;
    printf("The quotient: Z1 / Z2 = %.2f %+.2fi\n", creal(quotient), cimag(quotient));

    double complex conjugate = conj(z1);
    printf("The conjugate of Z1 = %.2f %+.2fi\n", creal(conjugate), cimag(conjugate));
    

    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx \n");

    populate_a();
    for (int i = 0; i < 10; i++)
    {
        printf("values: a[%d] = %.2f + %.2fi\t\n",i, creal(a[i]), cimag(a[i]));
    }

    return 0;
}































