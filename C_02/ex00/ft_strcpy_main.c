char *ft_strcpy(char *dest, char *src)
{
   int i;
   i = 0;

   while (cnt != '\0')
   {
      dest[i] = src[i];
      i++;
   }
   dest[i] = '\0';
   return (dest);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	source[30] = {"This is the source string!"};
// 	char	destination[225] = {"The"};

// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strcpy(destination, " an apple"));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strcpy(destination, " a day"));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strcpy(destination, " keeps"));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strcpy(destination, "the doctor"));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strcpy(destination, " away! "));
// 	printf("the result of ft_strcpy = %s\n",
// 		ft_strcpy(destination, source));
// 	return (0);
// }
