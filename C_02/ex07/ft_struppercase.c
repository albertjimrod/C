#include <unistd.h>
#include <stdio.h>

char    *ft_strupcase(char *str);
int main()
{
   
   char teststring1[20] = {"abskur80943'58"};
   printf("first str to test. \"%s\" => ", teststring1);
   ft_strupcase(teststring1);
   printf("%s\n", teststring1);
  

   char teststring2[20] = {""};
   printf("second str to test. \"%s\" => ", teststring2);
   ft_strupcase(teststring2);
   printf("%s\n", teststring2);

   char teststring3[20] = {"abskur#809W'58"};
   printf("third str to test. \"%s\" => ", teststring3);
   ft_strupcase(teststring3);
   printf("%s\n", teststring3);
   
   return (0);
}
char    *ft_strupcase(char *str)
{
  int i;

  i = 0;
  
  while (str[i] !='\0')
  {
    if (str[i] >=97 && str[i] <= 122)
    {
      //printf("%c", str[i]);
      str[i] = str[i] - (char)32;
      //printf("%c", str[i]);
    }
    i++;
  }
  return (str);
}
