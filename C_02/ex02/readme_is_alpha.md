|||
|:--|:--|
|ft_is_alpha||
|Files to turn in : ft_is_alpha.c||
|Allowed functions : |none|

<br>


- Create a function that returns 1 if the string given as a parameter contains only
alphabetical characters, and 0 if it contains any other character.

- The function should be prototyped as follows:

<pre> int	ft_str_is_alpha(char *str); </pre> 

### Operation:



|||
|:-|:-|
|my code||
|<pre> <br> #include <unistd.h><br><br>int   ft_str_is_alpha(char *str);<br><br>int main()<br>{<br>   int back;<br><br>   back = ft_str_is_alpha("abc");<br>   back = ft_str_is_alpha("1");<br>   back = ft_str_is_alpha("ab\0c1");<br>   back = ft_str_is_alpha("  ");<br><br>   write(1,&back,1);<br>   return (0);<br>}<br><br>int   ft_str_is_alpha(char *str)<br>{<br>   int i;<br>   i = 0;while (str[i] !='\0')<br>   {<br>      if ((str[i] >= 65 & str[i] <= 90) \|\| (str[i] >= 97 & str[i] <\= 122)) <br>         return (1);<br>      else<br>         return (0);<br>      i++;<br>   } <br>}</pre> ||
|Interesting differences||
|<pre> <br> int	ft_str_is_alpha(char *str)<br>{<br>	int	i;<br>	int	is_alpha;<br><br>	is_alpha = 1;<br>	i = 0;<br>	while (is_alpha == 1 && str[i] != '\0')<br>	{<br>		if ((str[i] < 'A' \|\| str[i] > 'Z') && (str[i] < 'a' \|\| str[i] > 'z'))<br>		{<br>			is_alpha = 0;<br>		}<br>		i++;<br>	}<br>	return (is_alpha);<br>} </pre> ||
