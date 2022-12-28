#include <unistd.h>
#include <stdio.h>

void punterismo(int  **nbr);

int main(void)
{
   int a;
   a = 10;

   int *a_ptr; // direccion memoria de a
   a_ptr = &a;

   int **b_ptr;
   b_ptr = &a_ptr;

   int ***c_ptr;
   c_ptr = &b_ptr;

   printf("a_ptr %p \n", a_ptr);
   printf("b_ptr %p \n", b_ptr);
   printf("b_ptr %p \n", c_ptr);

   //punterismo(a_ptr);
   return (0);
}


/*
void punterismo(int  **nbr)
{
   write(1,&nbr,1);
}
*/
