|||
|:--|:--|
|ft_putchar||
|Files to turn in : ft_putchar.c||
|Allowed functions : write||

<br>

- Write a function that displays the character passed as a parameter.

- It will be prototyped as follows :

<pre>  void ft_putchar(char c); </pre> 

To display the character, you must use the text write function as follows.

<pre> write(1, &c, 1); </pre>

<br>

|||
|:-|:-|
|code||
|<pre> #include <unistd.h> <br> void  ft_putchar(char c); <br> int main(void) <br> { <br>   char t; <br>   t = 'x'; <br>   ft_putchar(t); <br> } <br> void  ft_putchar(char c) <br> { <br>    write(1,&c,1); <br> }   </pre>|![putchar.png](putchar.png)|

<br>

We have two separate memory zones:

The part that corresponds to the main function where the variable of type character is declared where it is assigned at the same time and the call to the function. 

<br>

The function that does not return anything and that has a unique parameter of type character which we pass in the call of the function and that will be printed on the screen thanks to the function write.
