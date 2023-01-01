|||
|:--|:--|
|ft_str_is_printable||
|Files to turn in : ft_str_is_printable.c||
|Allowed functions : ||

<br>



-  Create a function that returns 1 if the string given as a parameter contains only
printable characters, and 0 if it contains any other character.

- Here’s how it should be prototyped :

<pre>  int	ft_str_is_printable(char *str);</pre> 

### Operation:

The operation is the same as the previous ones. Taking into account what is the situation that breaks the ideal condition and when this occurs is what allows us to get out of the loop.



|||
|:-|:-|
|code||
|<pre> <br> #include <unistd.h><br> #include <stdio.h><br> <br> int    ft_str_is_printable(char *str);<br> int main()<br> {<br>   int back;<br>   char input[] = {33,126,30,00};<br>   back = ft_str_is_printable(input);<br>   printf("%i", back);<br>   return (0);<br> }<br> int    ft_str_is_printable(char *str)<br> {<br>   int i;<br>   i = 0;<br>     <br>   int is_printable = 1;<br>   while (str[i] != 00)<br>   {<br>     if (str[i] < 33 \|\| str[i] == 127)<br>     {<br>       printf("%c", str[i]);<br>       is_printable = 0;<br>       return (is_printable);<br>     }<br>   i++;<br>   }<br>   return (is_printable);<br> } </pre> |![rev.png](print_alphabet.png)|
