|||
|:--|:--|
|ft_is_numeric.c||
|Files to turn in : ft_is_numeric.c||
|Allowed functions : |None|

<br>

- Create a function that returns 1 if the string given as a parameter contains only
digits, and 0 if it contains any other character.

- The function should be prototyped as follows:

<pre>  int	ft_str_is_numeric(char *str);</pre> 

### Operation:

When the function is called and we pass a string of characters in which there are only numerical characters what happens is that within the function there is a loop with a condition of not stopping rotating until it reaches the end of the array of characters`while (str[i] != 0)` 

To filter which characters are numeric `if (str[i] < 48 || str[i] > 57) /*if (str[i] >= 48 && str[i] <= 57)` the strategy has been to determine which characters are NOT numeric, because only a single non-numeric character appears in the condition then will be True and we return the value to the main function

|||
|:-|:-|
|code||
|<pre> <br> #include <unistd.h><br> #include <stdio.h><br> <br> int    ft_str_is_numeric(char *str);<br> int main()<br> {<br>     int back;<br>     back = ft_str_is_numeric("13b2");<br>     printf("%i", back);<br>     return (0);<br> }<br> int    ft_str_is_numeric(char *str)<br> {<br>     int i;<br>     i = 0;     <br>     int is_numeric = 1;<br>     while (str[i] != 0)<br>     {<br>         if (str[i] < 48 \|\| str[i] > 57) /*if (str[i] >= 48 && str[i] <= 57)*/<br>         {<br>             is_numeric = 0;<br>              return (is_numeric);<br>         }<br>         i++;<br>     }<br>     return (is_numeric);<br> }</pre> ||

