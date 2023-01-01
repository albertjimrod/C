#include <unistd.h>

char  *ft_strncpy(char *dest, char *src, unsigned int n);

char  *ft_strncpy(char *dest, char *src, unsigned int n)
{
   unsigned int   i;

   i = 0;
   if (n > 0)
   {
      while (src[i] !='\0' && i < n)
      {
         des t[i] = src[i];
         i++;
      }
      while (i < n)
      {
         dest[i] = '\0';
         i++;
      }
   return (dest);
}

#include <stdio.h>

int	main(void)
{
   char	source[15] = {"Dource string!"};
   char	destination[10] = {"Destination St"};
}
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, "an apple", 10));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, "on a day", 2));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, "keeps\0", 6));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, "the doctor", 0));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strncpy(destination, "away! ", 3));
// 	printf("the result of ft_
