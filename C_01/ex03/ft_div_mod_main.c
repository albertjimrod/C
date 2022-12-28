#include <unistd.h>
#include <stdio.h>

void  ft_div_mod(int a, int b, int *div, int *mod);

void  ft_div_mod(int a, int b, int *div, int *mod)
{
   *div = a/b;
   *mod = a%b;
}

int main(void)
{
   int x;
   int y;
   int dv;
   int md;
   int *pv_ptr;
   int *md_ptr;   

   x = 10;
   y = 2;

   dv = 0; 
   md = 0;

   printf("dv %i", x);
   printf("md %i", y);

   ft_div_mod(x, y, &x, &y);

   printf("dv %i", x);
   printf("md %i", y);    

   return (0);
}
