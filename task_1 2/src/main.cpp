
#include "../include/CComplexVector.hpp"
#include "../include/test.hpp"

#define VECTOR_PROJECTION_X 10.
#define VECTOR_PROJECTION_Y 5.

int main ()
{
  CComplexVector_t CComplexVector (VECTOR_PROJECTION_X, VECTOR_PROJECTION_Y);
  CComplexVector.print_vector ();
  CComplexVector.print_polar ();
  CComplexVector.print_exp ();

  CComplexVector_test ();

  return 0;
}
