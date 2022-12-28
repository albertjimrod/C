#include <unistd.h>
#include "ft_putchar.c"

void  ft_print_numbers(void);

void  ft_print_numbers(void)
{
   int car;
   car = 48;

   while (car < 58)
   {
      write(1,&car,1);
      car++;
   }
}
