#include <unistd.h>
#include "ft_putchar.c"

int   ft_strlen(char *str);

int main(void)
{
   char zero;
   zero = '0';

   int getback;
   getback = 0;
   
   char  cadena[10] = "aaaaaaaaba";

   getback = ft_strlen(cadena);
   zero = zero + getback;
   write(1,&zero,1);

   return (0);
}

int   ft_strlen(char *str)
{
   int   i;
   i = 0;

   while (str[i] != '\0')
   {
      str[i];
      i++;
   }
   return (i);
}
