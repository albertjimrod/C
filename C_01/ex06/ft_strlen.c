#include <unistd.h>
#include "ft_putchar.c"

int   ft_strlen(char *str);

int   ft_strlen(char *str)
{
   int   i;
   i = 0;

   while (str[i])
      i +=1;
   return (i);
}
