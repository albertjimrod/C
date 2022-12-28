#include <unistd.h>
#include <stdio.h>

void  ft_swap(int *a, int *b);

int main(void)
{
   int x;
   int y;
   x = 1;
   y = 2;

   printf("x: %i", x);
   write(1,"\n",1);

   printf("y: %i", y);
   write(1,"\n",1);

   ft_swap(&x, &y);
   printf("x: %i", x);
   printf("y: %i", y);
   write(1,"\n",1);
   return (0);
}

void  ft_swap(int *a, int *b)
{
   int z;

   z = *a;
   *a = *b;
   *b = z;
}
