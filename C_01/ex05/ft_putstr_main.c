#include <unistd.h>
#include <stdio.h>

void  ft_putstr(char *str);

int main(void)
{
   char cadena[3] = "abc";

   ft_putstr(cadena);
   write(1,"\n",1);
   return (0);
}

void  ft_putstr(char *str)
{
   int i;
   i = 0;
   while (str[i] != '\0')
   {
      write(1,&str[i],1);
      i++;
   }
}
