#include <arm_sve.h>

int func_char()
{
  char left;
  char right;

  svbool_t pg = svwhilelt_b64(left, right);

  return (0);
}
