|||
|:--|:--|
|ft_print_alphabet||
|Files to turn in : ft_print_alphabet.c||
|Allowed functions : write||

<br>

- Create a function that displays the alphabet in lowercase, on a single line, by
ascending order, starting from the letter ’a’.

- Here’s how it should be prototyped :

<pre>  void ft_putchar(char c); </pre> 

### Operation:

We call the function from the main. 

When we are inside the function:
- There is declared a variable of integer type to which is given the value of 97 that corresponds to the character A of the ASCII table. 

- Within a while loop we call the `putchar` function to which we parameter the value of the character we want to display.

- And then increase the value by 1 in the integer variable.

<br>

The loop will end when the value of the integer variable equals 122. In this way we obtain the alphabet consecutively without line breaks.

|||
|:-|:-|
|code||
|<pre> #include <unistd.h> <br> #include <ft_putchar.h> <br> <br> void  ft_print_alphabet(void); <br> int main(void) <br> { <br>   ft_print_alphabet(); <br> } <br> void  ft_print_alphabet(void) <br> { <br>   int car; <br>   car = 97; <br>   while (car < 122) <br>   { <br>     ft_putchar(car); <br>     car++; <br>   } <br>}   </pre> |![print_alphabet.png](print_alphabet.png)|
