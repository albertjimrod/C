#include <unistd.h>
#include <stdio.h>
#define SIZE 3

char  *ft_strcpy(char *dest, char *src);

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
