|||
|:--|:--|
|ft_print_numbers||
|Files to turn in : ft_print_numbers.c||
|Allowed functions : write||

<br>

- Create a function that displays all digits, on a single line, by ascending order.

- Here’s how it should be prototyped :

<pre>  void ft_print_numbers(void); </pre> 

### Operation:

Basically, the same operation that we have seen in previous exercises is repeated, in this case what varies is that instead of representing text characters what we see are numbers, but we must bear in mind that these numbers are text characters with their corresponding decimal value in ASCII.



<br>

The loop will end when the value of the integer variable equals 97. In this way we obtain the alphabet consecutively without line breaks.

|||
|:-|:-|
|code||
|<pre> #include <unistd.h> <br> #include <ft_putchar.h> <br> <br> void  ft_print_numbers(void); <br> int main(void) <br> { <br>   ft_print_numbers(); <br> } <br> void  ft_print_numbers(void) <br> { <br>   int car; <br>   car = 48; <br>   while (car < 58) <br>   { <br>     write(1,&car,1); <br>     car++; <br>   } <br>}   </pre> |![print_numbers.png](print_numbers.png)|
