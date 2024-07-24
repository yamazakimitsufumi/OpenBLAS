#include <arm_sve.h>

int func_int()
{
  int int_left;
  int int_right;

  svbool_t pg = svwhilelt_b64(int_left, int_right);

  return (0);
}
