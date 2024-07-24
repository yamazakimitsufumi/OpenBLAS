#include <arm_sve.h>

int func_double()
{
  double left;
  double right;

  svbool_t pg = svwhilelt_b64(left, right);

  return (0);
}
