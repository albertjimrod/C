#include <unistd.h>
#include "ft_putchar.c"

void  ft_print_alphabet(void);

int main(void)
{
   ft_print_alphabet();
}

void  ft_print_alphabet(void)
{
   int   car;
   car = 97;

   while (car < 122)
   {
      ft_putchar(car);
      car++;
   }
}
