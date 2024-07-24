#include <arm_sve.h>

int func_char()
{
  char char_left;
  char char_right;

  svbool_t pg = svwhilelt_b64(char_left, char_right);

  return (0);
}
