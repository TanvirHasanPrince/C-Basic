// Data types
// C has several types of variables, but there are a few basic types:

// Integers - whole numbers which can be either positive or negative. Defined using char, int, short, long or long long.
// Unsigned integers - whole numbers which can only be positive. Defined using unsigned char, unsigned int, unsigned short, unsigned long or unsigned long long.
// Floating point numbers - real numbers (numbers with fractions). Defined using float and double.
// Structures - will be explained later, in the Structures section.



#include <stdio.h>

int main() {
    int a = 0, b = 1, c = 2, d = 3, e = 4;
    a = b - c + d * e;
    printf("%d", a);
    return 0;
}


// In the next exercise, you will need to create a program which prints out the sum of the numbers a, b, and c.
#include <stdio.h>

int main() {
  int a = 3;
  float b = 4.5;
  double c = 5.25;
  float sum = a + b + c;

  /* Your code goes here */

  printf("The sum of a, b, and c is %f.", sum);
  return 0;
}
