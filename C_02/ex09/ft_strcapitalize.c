#include <unistd.h>

char  *ft_strcapitalize(char *str);

int main(void)
{
   char input[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
   char *output;
   int size;
   
   output = ft_strcapitalize(input);

   size = *(&input + 1) - input; // getting numbers of characters

   write(1,output,size);         

   return (0);
}

char  *ft_strcapitalize(char *str)
{
   int   i;
   
   i = 0;

   while (str[i] !='\0')
   {
     if (i == 0)
     {
       str[i] = (char)(str[i] - 32);
     }
     /* if `space` or + or - and lowercase then change value for capitalized one on next position*/
     if ((str[i] == 32 || str[i] == 43 || str[i] == 45) && (str[i+1] > 96 && str[i+1] < 123))
     {
        str[i+1] = (char)(str[i+1] - 32);
     }
     i++;
   }
   return (str);
}
