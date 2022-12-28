#include <unistd.h>

void  ft_ultimate_div_mod(int *a, int *b);

void  ft_ultimate_div_mod(int *a, int *b)
{
   int z;
   int r;

   z = *a/ *b;
   r = *a%*b;

   *a = z;
   *b = r;
}
