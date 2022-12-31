#include <unistd.h>
#include <stdio.h>
#define SIZE 3

char  *ft_strcpy(char *dest, char *src);

int main(void)
{
   char *retorno;
   char  fuente[size]="ABh";
   char  dest[size];

   retorno = ft_strcpy(dest, fuente);
   
   write(1, retorno, SIZE);
   write(1, "\n", 1);
   return (0);
}

char *ft_strcpy(char *dest, char *src)
{
   int cnt;
   cnt = 0;

   while (cnt != SIZE)
   {
      dest[cnt] = src[cnt];
      ++cnt;
   }
   dest[cnt] = '\0';
   return (dest);
}
