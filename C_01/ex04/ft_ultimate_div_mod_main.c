#include <unistd.h>
#include <stdio.h>

void  ft_ultimate_div_mod(int *a, int *b);

int    main(void)
{
   int x;
   int y;
   x = 10;
   y = 5;

   printf("x: %i ", x);
   printf("y: %i \n", y);

   ft_ultimate_div_mod(&x, &y);
   
   printf("x: %i ", x); 
   printf("y: %i \n", y);

   return (0);
}

void  ft_ultimate_div_mod(int *a, int *b)
{
   int z;
   int r;

   z = *a/ *b;
   r = *a%*b;

   *a = z;
   *b = r;
}
