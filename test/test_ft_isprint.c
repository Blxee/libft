#include "libft.h"

int test_ft_isprint(void)
{
  int result;

  result = 1;
  result *= ft_isprint(32);
  result *= ft_isprint(64);
  result *= ft_isprint(126);
  result *= !ft_isprint(127);
  result *= !ft_isprint(31);
  return (result);
}
