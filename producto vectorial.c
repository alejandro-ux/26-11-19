#include <stdio.h>
#include <stdlib.h>
void prod_vec (float, float, float, float, float, float, float *, float *, float *);

int main ()
{
    float x1, y1, z1, x2, y2, z2;
    float x3, y3, z3;

    printf ("ingrese tres componentes i,j. De dos vectores: ");
    scanf ("%f%f%f%f%f%f", &x1, &y1, &z1, &x2, &y2, &z2);

    prod_vec (x1, y1, z1, x2, y2, z2, &x3, &y3, &z3);
    printf ("El producto vectorial vale: (%f,%f,%f) n", x3, y3, z3);

    system ("pause");
    return 0;
}

    void prod_vec (float x1, float y1, float z1, float x2, float y2, float z2, float *x3, float *y3, float *z3)
    {
      *x3 = y1*z2-z1*y2;
      *y3 = x1*z2-z1*x2;
      *z3 = x1*y2-y1*x2;
    }
