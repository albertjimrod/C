|||
|:--|:--|
|ft_strcapitalize||
|Files to turn in : ft_strcapitalize.c||
|Allowed functions : |None|

<br>



- Create a function that capitalizes the first letter of each word and transforms all
other letters to lowercase.
- A word is a string of alphanumeric characters.
- Here’s how it should be prototyped :

<pre>  char *ft_strcapitalize(char *str);</pre> 

t should return `str`.
• For example:
`salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un`


• Becomes:
`Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un`

<br>

### Operation:

If we find letters in minuscule in the position of the i + 1 in addition to with spaces, - and with + in the i then we must change the character by the one that corresponds to uppercase within the text string.


|||
|:-|:-|
|code||
|<pre> #include <unistd.h><br> #include <stdio.h><br> <br> char  *ft_strcapitalize(char *str);<br> <br> int main(void)<br> {<br>    char input[] = "comment ? 42mots quarante-deux; h+et+un";<br>    char *output;<br>    int size;<br>    output = ft_strcapitalize(input);<br> <br>    size = *(&input + 1) - input;<br> <br>    write(1,output,size);<br> <br>    return (0);<br> }<br> <br> char  *ft_strcapitalize(char *str)<br> {<br>    int   i;<br>    <br>    i = 0;<br> <br>    while (str[i] !='\0')<br>    {<br>      if (i == 0)<br>      {<br>        str[i] = (char)(str[i] - 32);<br>      }<br>      /*if `space` or + or - and lowercase then change value for capitalized one on next position*/    <br>      if ((str[i] == 32 \|\| str[i] == 43 \|\| str[i] == 45) && (str[i+1] > 96 && str[i+1] < 123))<br>      {<br>        str[i+1] = (char)(str[i+1] - 32);<br>      }<br>      i++;<br>    }<br>    return (str);<br> }</pre> ||
