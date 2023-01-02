#include <unistd.h>

char *ft_strlowcase(char *str);

int main(void)
{
   char *answer;
   char input[] = "AVcDB";
   answer = ft_strlowcase(input);
   write(1,answer,5);
   return (0);
}

char *ft_strlowcase(char *str)
{
   int i;

   i = 0;

   while (str[i] != '\0')
   {
      if (str[i] > 64 && str[i] < 91)
      {
         str[i] = (char)(str[i] + 32);
      }
      i++;
   }
   return (str);
}
