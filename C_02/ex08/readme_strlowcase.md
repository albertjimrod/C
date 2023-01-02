|||
|:--|:--|
|ft_strlowcase||
|Files to turn in : ft_strlowcase.c||
|Allowed functions : |None|

<br>


- Create a function that transforms every letter to lowercase.
- The function should be prototyped as follows:

<pre>  char *ft_strlowcase(char *str);</pre> 

### Operation:

Basically it is the same as the previous exercise the only thing I must highlight is how I have made use of the following:

``str[i] = (char)(str[i] + 32);``

The first thing it does is the operation and then converts it to the appropriate data type to insert it into the array of characters.

### *Nota:* No hace falta `&` cuando quiero imprimir una cadena de caracteres en `write`.

|||
|:-|:-|
|code||
|<pre> #include <unistd.h><br> <br> char *ft_strlowcase(char *str);<br> <br> int main(void)<br> {<br>    char *answer;<br>    char input[] = "AVcDB";<br>    answer = ft_strlowcase(input);<br>    write(1,answer,5);<br>    return (0);<br> }<br> <br> char *ft_strlowcase(char *str)<br> {<br>    int i;<br> <br>    i = 0;<br> <br>    while (str[i] != '\0')<br>    {<br>       if (str[i] > 64 && str[i] < 91)<br>       {<br>          str[i] = (char)(str[i] + 32);<br>       }<br>       i++;<br>    }<br>    return (str);<br> } </pre> ||
