#include <unistd.h>
#include "ft_putchar.c"

void  ft_is_negative(int n);

int main(void)
{
   ft_is_negative(3);
}


void  ft_is_negative(int n)
{
   if (n >= 0)
   {
      ft_putchar('P');
   }
   else
      ft_putchar('N');
}
