#include <arm_sve.h>

int func_long_double()
{
  long double long_double_left;
  long double long_double_right;

  svbool_t pg = svwhilelt_b64(long_double_left, long_double_right);

  return (0);
}
