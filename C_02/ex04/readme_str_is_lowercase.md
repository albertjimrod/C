|||
|:--|:--|
|||
|Files to turn in : .c||
|Allowed functions : ||

<br>



• Create a function that returns 1 if the string given as a parameter contains only
lowercase alphabetical characters, and 0 if it contains any other character.
• Here’s how it should be prototyped :

<pre>  int	ft_str_is_lowercase(char *str);</pre> 

### Operation:


As we have seen in the previous exercise, within the function we create the return variable with a value of 1 `int is_lower = 1`, in this way when within the loop we detect a single character that we do NOT want,`if (str[i] < 97 \|\| str[i] > 122) /*if (str[i] >= 48 && str[i] <= 57)` what we will do is reassign the value to the return variable <br> `is_lower = 0;`<br>`  return (is_lower);` <br> and leave the loop.


|||
|:-|:-|
|code||
|<pre> <br>#include <unistd.h><br>#include <stdio.h><br><br>int    ft_str_is_lowercase(char *str);<br>int main()<br>{<br>    int back;<br>    back = ft_str_is_lowercase("aaaatytreetffgdszxvvczx_vz");<br>    printf("%i", back);<br>    return (0);<br>}<br>int    ft_str_is_lowercase(char *str)<br>{<br>    int i;<br>    i = 0;<br>    <br>    int is_lower = 1;<br>    while (str[i] != 0)<br>    {<br>        if (str[i] < 97 \|\| str[i] > 122) /*if (str[i] >= 48 && str[i] <= 57)*/<br>        {<br>            is_lower = 0;<br><br>            return (is_lower);<br>        }<br>        i++;<br>    }<br>    return (is_lower);<br> } </pre> ||
