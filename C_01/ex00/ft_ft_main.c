#include <unistd.h>
#include <stdio.h>

void  ft_ft(int   *nbr);

int main(void)
{
   int i;
   i = 0;

   printf("antes %i", i);
   ft_ft(&i);
   printf("bef %i", i);
   return (0);
}


void  ft_ft(int   *nbr)
{
   int num;
   num = 42;

   *nbr = num;
}
