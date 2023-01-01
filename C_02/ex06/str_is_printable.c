#include <unistd.h>
#include <stdio.h>

int    ft_str_is_printable(char *str);
int main()
{
  int back;
  char input[] = {33,126,30,00};
  back = ft_str_is_printable(input);
  printf("%i", back);
  return (0);
}
int    ft_str_is_printable(char *str)
{
  int i;
  i = 0;
    
  int is_printable = 1;
  while (str[i] != 00) /*00 es \0 o lo que es lo mismo NULL */
  {
    if (str[i] < 33 || str[i] == 127)
    {
      is_printable = 0;
      return (is_printable);
    }
  i++;
  }
  return (is_printable);
}
