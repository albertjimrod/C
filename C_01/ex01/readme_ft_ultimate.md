|||
|:--|:--|
|ft_ultimate_ft||
|Files to turn in : ft_ultimate_ft.c||
|Allowed functions : none||

<br>

- Write a function that takes pointer to pointer to pointer to pointer to punch- Teur on pointer on pointer on pointer on pointer on int en parameter and sets the int to 42.

- Here’s how it should be prototyped :

<pre>  void	ft_ultimate_ft(int *********nbr); </pre> 

### Operation:

To understand the exercise I have made this sketch. 

It is about creating a variable with a value and obtaining the memory address and creating a new pointer type variable that contains (point) to the previous variable and again create another pointer type variable that contains the memory address of the previous variable (that is, it is a pointer) to the variable. To be clear about what the exercise that asks us means because the resolution is simple but the concept behind it is important.

<br>

|||
|:-|:-|
|code||
|<pre> <br> int main(void) <br> {  <br>  int a; <br>  a = 10; <br> <br>  int *a_ptr; // direccion memoria de a <br>  int **b_ptr; <br>  b_ptr = &a_ptr; <br>  int ***c_ptr; <br>  c_ptr = &b_ptr; <br> <br>  printf("a_ptr %p \n", a_ptr); <br>  printf("b_ptr %p \n", b_ptr); <br>  printf("b_ptr %p \n", c_ptr); <br> <br>  return (0); <br> }  </pre>|![ptr.png](ptr.png)|
