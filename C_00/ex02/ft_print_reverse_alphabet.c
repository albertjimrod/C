#include <unistd.h>
#include "ft_putchar.c"

void  ft_print_reverse_alphabet(void);

void  ft_print_reverse_alphabet(void)
{
   int   car;
   car = 122;

   while (car > 96)
   {
      ft_putchar(car);
      car--;
   }
}
