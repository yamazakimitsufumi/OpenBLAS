#include <arm_sve.h>

int func_short()
{
  short short_left;
  short short_right;

  svbool_t pg = svwhilelt_b64(short_left, short_right);

  return (0);
}
