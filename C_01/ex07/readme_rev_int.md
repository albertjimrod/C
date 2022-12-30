|||
|:--|:--|
|ft_rev_int_tab||
|Files to turn in : ft_rev_int_tab.c||
|Allowed functions : ninguna||

<br>

- Write a function that reverses the order of the elements of an array of integers.

- The parameters are a pointer to integer and the number of integers in the array. 

- The function should be prototyped as follows:

<pre>  void ft_rev_int_tab(int *tab, int size);</pre> 

### Operation:
- We are asked to display the contents of the integer type array in reverse.
- The first thing we have to do is know the length of our array by doing and we do it by the difference between the last position occupied by our array of integer type and the first.
- Once we know what it measures, we go through the array in reverse until we reach the beginning.



|||
|:-|:-|
|code||
|<pre> <br> #include <stdio.h> <br> #include <unistd.h> <br> #include "ft_putchar.c" <br>  <br> /*- Function that reverses the order of the elements of an array of integers.*/ <br> void  ft_rev_int_tab(int *tab, int size); <br> <br> int main(void) <br> { <br>    int ints[] = {1,3,5};<br>    int size; <br>    int *ptr_ints; <br>    ptr_ints = ints; <br> <br>    size = *(&ints + 1) - ints; /* size array */ <br>  <br>    ft_rev_int_tab(ints, size); /*call func*/ <br> } <br> <br> void  ft_rev_int_tab(int *tab, int size) <br> { <br>    char digit; <br>    digit = '0'; /* char as offset to show numbers by write*/<br><br>    while (size != 0) /*condition for loop; while size different 0*/ <br>    { <br>       ft_putchar(tab[size-1] + digit); <br> size--;<br> write(1,"\n",1); <br>    }<br> } </pre> |![rev_int.png](rev_int.png)|
