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

- Knowing how much an integer type array measures is not as easy as in the case of a character type array, the following code is only designed to understand step by step how to carry it out.
- The operation is based on the following idea: If you know the memory address where the integer array begins and you know the number of bytes it contains divided by the type of bytes you will know the elements that make it up.

- Initially we declare and assign three values to an array of integer type.
- As we have not defined a specific measure, the dimension of the array is given by the number of elements that we introduce, this is important because if instead of entering the values manually we did it in an automated way we would never know how much it measures.
- We declare a variable of type pointer `int *ptr_ints` and another variable type int `int size`.

- In the following steps what is done is to show in which position of real memory these data are located, the distance in bytes that exists between data and data are 4 bytes, which is precisely what occupies a data of integer type in memory.
- We get the memory address where the array of integers begins :
- `&ints: -16774188`
- `&ints + 1: -16774176`
- `ints: -16774188`
- `*(&ints + 1) - ints: 3`

This step - `&ints + 1: -16774176` allows us to know what the final direction of our array is, through the arithmetic of pointers.

If I have an array of integer type therefore each of its elements has a measure of 4bytes if I do `+ 1` to the `&int`, what I am basically doing is multiplying the amount of bytes that implicitly underlie the array variable by 1 and that gives me 12 bytes which is the result of multiplying 3cells x of 4 bytes. `&ints + 1: -16774176`

Then with this final position of the array minus the initial position `ints: -16774188 ` I get the value of elements that make up the array of integer type. `*(&ints + 1) - ints: 3`



|||
|:-|:-|
|code||
|<pre> <br>#include <stdio.h><br>#include <unistd.h><br>#include <unistd.h><br>void  ft_putchar(char c)<br>{<br>   write(1,&c,1);<br>}<br>#define SIZE 5<br><br>void  ft_rev_int_tab(int *tab, int size);<br><br><br><br>int main(void)<br>{<br>   int ints[] = {1,3,5};<br><br>  int *ptr_ints;<br>   int size;<br><br>  ptr_ints = ints; <br><br>   printf("ptr_ints: %p \n", &ints[0]);<br>   printf("%ld bytes \n", sizeof(ints[0]));<br><br>  printf("ptr_ints: %p \n", &ints[1]);<br>   printf("%ld bytes \n", sizeof(ints[1]));<br><br>   printf("ptr_ints: %p \n", &ints[2]);<br>   printf("%ld bytes \n", sizeof(ints[2])); <br><br>   size = &ints;<br>  printf("&ints: %i \n", size); <br>   <br>   size = &ints + 1;<br>   printf("&ints + 1: %i \n", size); <br>   <br>  size = ints;<br>   printf("ints: %i \n", size); <br>   <br>   size = *(&ints + 1) - ints;<br>   printf(" *(&ints + 1) - ints: %i \n", size); <br>  <br>}  </pre> |![rev.png](print_alphabet.png)|

