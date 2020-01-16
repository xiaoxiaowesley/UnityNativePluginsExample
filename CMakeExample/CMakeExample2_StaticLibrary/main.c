#include <stdio.h>
#include "math/MathFunction.h"
int main(int argc, char *argv[])
{
  float a = 1.0;
  float b = 2.0;
  float c = AddFunction(a, b);
  printf("Using Add function in library : a + b = %f \n", c);
}