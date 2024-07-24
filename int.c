#include <arm_sve.h>

int func_int()
{
  int left;
  int right;

  svbool_t pg = svwhilelt_b64(left, right);

  return (0);
}
