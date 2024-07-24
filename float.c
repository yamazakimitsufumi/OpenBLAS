#include <arm_sve.h>

int func_float()
{
  float float_left;
  float float_right;

  svbool_t pg = svwhilelt_b64(float_left, float_right);

  return (0);
}
