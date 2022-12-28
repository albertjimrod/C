|||
|:--|:--|
|div_mod||
|Files to turn in : div_mod.c||
|Allowed functions : none||

<br>

- Write a ft_div_mod function that has the following prototyping:

- Here’s how it should be prototyped :

<pre>  void ft_div_mod(int a, int b, int *div, int *mod); </pre> 

### Operation:

In the main function we have declared and assigned two variables `x = 10` and `y = 2`

When the function is called, the direction of the variables is passed through parameters into the function.

At that moment we have in the function, the memory address in which our variables of the main function are located.

So we divide the value of A by B and assign it to the DIV pointing variable resulting in the modification of the value that we had previously initialized in main. Same with the operation of rest on the `*mod`


<br>

|||
|:-|:-|
|code||
|<pre> <br> #include <unistd.h>  <br> #include <stdio.h> <br> <br> void  ft_div_mod(int a, int b, int *div, int *mod); <br> void  ft_div_mod(int a, int b, int *div, int *mod) <br> {  <br>    *div = a/b; <br>    *mod = a%b;<br> }  <br> <br> int main(void) <br> {  <br>   int x;<br>   int y;<br>   int dv;<br>   int md;<br>   int *pv_ptr;<br>   int *md_ptr;<br> <br>   x = 10; <br>   y = 2;<br> <br>    dv = 0; <br>    md = 0;<br> <br>    printf("dv %i", x);<br>    printf("md %i", y); <br> <br>    ft_div_mod(x, y, &x, &y); <br> <br>    printf("dv %i", x);<br>    printf("md %i", y);<br> <br>    return (0);<br> }  </pre>| ![div_mod.png](div_mod.png) ![div_mod2.png](div_mod2.png)|

