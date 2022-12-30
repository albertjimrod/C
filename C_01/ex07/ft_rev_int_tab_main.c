#include <stdio.h>
#include <unistd.h>
#include "ft_putchar.c"

/*- Function that reverses the order of the elements of an array of integers.*/
void  ft_rev_int_tab(int *tab, int size);

int main(void)
{ 
   int ints[] = {1,3,5};
   int size;
   int *ptr_ints;
   ptr_ints = ints;

   size = *(&ints + 1) - ints; /* size array */
  
   ft_rev_int_tab(ints, size); /*call func*/
}

void  ft_rev_int_tab(int *tab, int size)
{
   char digit; 
   digit = '0'; /* char as offset to show numbers by write*/

   while (size != 0) /*condition for loop; while size different 0*/ 
   {
      ft_putchar(tab[size-1] + digit);
      size--;
      write(1,"\n",1);
   }
}



