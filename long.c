#include <arm_sve.h>

int func_long()
{
  long long_left;
  long long_right;

  svbool_t pg = svwhilelt_b64(long_left, long_right);

  return (0);
}
