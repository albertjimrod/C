|||
|:--|:--|
|ft_is_negative||
|Files to turn in : ft_is_negative.c||
|Allowed functions : write||

<br>

- Create a function that displays ’N’ or ’P’ depending on the integer’s sign entered as a parameter. If n is negative, display ’N’. If n is positive or null, display ’P’.

- Here’s how it should be prototyped :

<pre>  void ft_is_negative(int n); </pre> 

### Operation:


<br>

|||
|:-|:-|
|code||
|<pre> #include <unistd.h> <br> #include <ft_putchar.h> <br> <br> void  ft_is_negative(int n);; <br> int main(void) <br> { <br>   ft_is_negative(-3); <br> } <br> void  ft_is_negative(void) <br> { <br>   if (n >= 0) <br>   { <br>     ft_putchar('P'); <br>   } <br>   else <br>       ft_putchar('P'); <br>}   </pre> |![ft_is_negative.png](ft_is_negative.png)|
