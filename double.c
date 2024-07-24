#include <arm_sve.h>

int func_double()
{
  double double_left;
  double double_right;

  svbool_t pg = svwhilelt_b64(double_left, double_right);

  return (0);
}
