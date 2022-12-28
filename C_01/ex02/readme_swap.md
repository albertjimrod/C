
|||
|:--|:--|
|ft_swap||
|Files to turn in : ft_swap.c||
|Allowed functions : none||

<br>

- Write a function that swaps the contents of two integers whose addresses are data in parameters.

- Here’s how it should be prototyped :

<pre>  void ft_swap(int *a, int *b); </pre> 

### Operation:

In the main function we have declared and assigned two variables

When the function is called, the direction of the variables is passed through parameters

At that moment we have in the function, the memory address in which our variables of the main function are located.


<br>

|||
|:-|:-|
|code||
|<pre> <br> #include <unistd.h> <br> #include <stdio.h> <br> int main(void) <br> { <br>  int x; <br>  int y; <br>  x = 1; <br>  y = 2; <br>  printf("x: %i", x); <br>  write(1,"\n",1); <br>  printf("y: %i", y); <br>  write(1,"\n",1); <br> <br>  ft_swap(&x, &y); <br>  printf("x: %i", x); <br>  printf("y: %i", y); <br>  write(1,"\n",1); <br>  return (0); <br> } <br>   <br> void  ft_swap(int *a, int *b) <br> { <br>  int z; <br>  z = *a; <br>  *a = *b; <br>  *b = z; <br> } </pre>| ![swp.png](swp.png) ![swp1.png](swp1.png)|

