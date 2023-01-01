#include <unistd.h>

int   ft_str_is_alpha(char *str);

int main()
{
   int back;

   back = ft_str_is_alpha("abc");
   back = ft_str_is_alpha("1");
   back = ft_str_is_alpha("ab\0c1");
   back = ft_str_is_alpha("  ");

   write(1,&back,1);
   return (0);
}

int   ft_str_is_alpha(char *str)
{
   int i;
   i = 0;

   while (str[i] !='\0')
   {
      if ((str[i] >= 65 & str[i] <= 90) || (str[i] >= 97 & str[i] <= 122))
         return (1);
      else
         return (0);
      i++;
   }
}
