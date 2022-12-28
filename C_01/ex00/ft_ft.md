|||
|:--|:--|
|ft_ft||
|Files to turn in : ft_ft.c||
|Allowed functions : none||

<br>

- Write a function that takes a pointer to int as a parameter and gives the int the value of 42.

- Here’s how it should be prototyped :

<pre>  void  ft_ft(int *nbr); </pre> 

### Operation:

We declare a variable called `i` with an initial value of `0`.

The contents of that variable are printed only to see the change happening.

Call the function and **pass as an argument the memory address of the variable that we have initialized with the value of `0`**. 

One within the function, we are in the memory space reserved for it and we have: 

- The pointer declared as parameter `*nbr` that at that moment points to the memory direction of i because we had passed the memory address of i by arguments. 

- An integer variable with the value of `42`. 

- The key is assigning the value `42` of the num variable to the pointer `*nbr`, so we manage to modify the content of `i` in the main function. 

Working with the content of variables in this way is called a step-by-reference.


<br>

|||
|:-|:-|
|code||
|<pre> #include <unistd.h> <br> #include <stdio.h><br> <br> ft_ft(int   *nbr);<br> int main(void) <br> { <br>  int i;<br>  i = 0;<br>  printf("antes %i", i);<br>  ft_ft(&i);<br>  printf("bef %i", i);<br>  return (0);<br> } <br> void  ft_ft(int   *nbr)<br> {<br> int num;<br> num = 42;<br> *nbr = num;<br> }   </pre>|![ft_ft.png](ft_ft.png)|
