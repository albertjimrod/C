#include <unistd.h>
#include "ft_putchar.c"

void  ft_print_reverse_alphabet(void);

int   main(void)
{
   ft_print_reverse_alphabet();
   write(1,"\n",1);
   return (0);
}

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
