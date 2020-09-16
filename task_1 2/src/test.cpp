
#include "../include/test.hpp"

void CComplexVector_test ()
{
  CComplexVector_t CComplexVector0 (VEC0_A, VEC0_B);
  CComplexVector_t CComplexVector1 (VEC1_A, VEC1_B);

  if (fabs (CComplexVector0.get_a () - VEC0_A) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector0.get_b () - VEC0_B) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector1.get_a () - VEC1_A) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector1.get_b () - VEC1_B) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }

  if (fabs (CComplexVector0.get_rho () - sqrt (VEC0_A * VEC0_A + VEC0_B * VEC0_B)) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector0.get_phi () - atan (VEC0_B / VEC0_A)) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector1.get_rho () - sqrt (VEC1_A * VEC1_A + VEC1_B * VEC1_B)) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector1.get_phi () - atan (VEC1_B / VEC1_A)) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }

  CComplexVector0 = CComplexVector0 + CComplexVector1;

  if (fabs (CComplexVector0.get_a () - VEC0_A - VEC1_A) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector0.get_b () - VEC0_B - VEC1_B) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }

  CComplexVector0 = CComplexVector0 - CComplexVector1;

  if (fabs (CComplexVector0.get_a () - VEC0_A) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector0.get_b () - VEC0_B) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector0.get_rho () - sqrt (VEC0_A * VEC0_A + VEC0_B * VEC0_B)) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector0.get_phi () - atan (VEC0_B / VEC0_A)) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }

  CComplexVector0 = CComplexVector0 * CComplexVector1;

  if (fabs (CComplexVector0.get_a () - (VEC0_A * VEC1_A - VEC0_B * VEC1_B)) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }
  if (fabs (CComplexVector0.get_b () - (VEC0_A * VEC1_B + VEC0_B * VEC1_A)) > 1e-16)
    { printf ("TEST FAILED!\n"); return; }

  printf ("TEST PASSED!\n");
  return;
}
