|||
|:-|:-|
|code||
|<pre> #include <unistd.h> <br> void  ft_putchar(char c); <br> int main(void) <br> { <br>   char t; <br>   t = 'x'; <br>   ft_putchar(t); <br> } <br> void  ft_putchar(char c) <br> { <br>    write(1,&c,1); <br> }   </pre>|![putchar.png](putchar.png)|
