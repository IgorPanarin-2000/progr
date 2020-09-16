#ifndef __CCOMPLEXVECTOR_T_HPP_INCLUDED__
#define __CCOMPLEXVECTOR_T_HPP_INCLUDED__

#include <cmath>
#include <memory>
#include <vector>
#include <iostream>
#include <algorithm>

#include <math.h>
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

class CComplexVector_t
{
private:
  double m_a;
  double m_b;
  double m_rho;
  double m_phi;

public:
  CComplexVector_t ();
  CComplexVector_t (double a, double b);
  ~CComplexVector_t ();

  void set_a (const double a);
  void set_b (const double b);

  double get_a ();
  double get_b ();
  double get_rho ();
  double get_phi ();

  void calc_polar ();

  void print_vector ();
  void print_polar ();
  void print_exp ();

  CComplexVector_t& operator* (const CComplexVector_t& rhs);
  CComplexVector_t& operator- (const CComplexVector_t& rhs);
  CComplexVector_t& operator+ (const CComplexVector_t& rhs);
  CComplexVector_t& operator= (const CComplexVector_t& rhs);
};

#endif // __CCOMPLEXVECTOR_T_HPP_INCLUDED__
