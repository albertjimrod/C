#include <unistd.h>

void  ft_swap(int *a, int *b);

void  ft_swap(int *a, int *b)
{
   int z;
   z = *a;
   *a = *b;
   *b = z;
}
