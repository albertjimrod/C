|||
|:--|:--|
|ft_strlen||
|Files to turn in : ft_strlen.c||
|Allowed functions : none||

<br>

- Write a function that displays the number of characters.

- Write a `ft_div_mod` function that has the following prototyping:

<pre> int  ft_strlen(char *str);</pre>

### Operation:

- The purpose of this function is to display the number of characters in a string.

- In the main function we declare a variable of type character and assign the character equivalent to the number zero.
- We declare a variable of integer type and equate it to 0
- We declare a variable of type character but that is a string of characters assigning characters in double quotes
When calling the function, we pass in the argument the variable with the string of characters

- As in the declaration of the function the parameter is a pointer of type character `*str`, automatically we have the address to which corresponds the segment of memory where that string of characters begins

- Within the function we declare a variable of integer type `i` that will make us the function of character counter.

- Through a loop of type while and the condition  `while (str[i] != '\0')` that it must continue until it finds the end of the string the loop iterates, when it reaches the end the value is returned to the function by `return (i)`;

- returning the value and adding it to the zero variable, obtaining a value ranging from 1 to 9 to be printed on the screen.

<br>

|||
|:-|:-|
|code||
|<pre> <br> #include <unistd.h><br><br>void  ft_putchar(char c);<br><br>int   ft_strlen(char *str);<br><br>int main(void)<br>{<br>   char zero; <br>   zero = '0';<br>   <br>   int getback;<br>   getback = 0;<br>    <br>   char  cadena[] = "aBz";<br>   getback = ft_strlen(cadena);<br>  <br>   zero = zero + getback;<br>   write(1,&zero,1); <br>   <br>   return (0);<br>}<br><br><br>int   ft_strlen(char *str)<br>{<br>    int   i;<br>    i = 0;<br>   <br>    while (str[i] != '\0')<br>    {<br>      str[i]; <br>      i++;<br>    }<br>    return (i);<br>}<br><br>void  ft_putchar(char c)<br>{<br>   write(1,&c,1); <br> } </pre> | ![strlen.png](strlen.png) ![strlen1.png](strlen1.png) |
