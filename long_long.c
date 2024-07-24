#include <arm_sve.h>

int func_long_long()
{
  long long long_long_left;
  long long long_long_right;

  svbool_t pg = svwhilelt_b64(long_long_left, long_long_right);

  return (0);
}
