|||
|:--|:--|
|ft_strcpy.c||
|Files to turn in : ft_strcpy.c.c||
|Allowed functions : |none|

<br>


- Reproduce the behavior of the function strcpy (man strcpy).
- The function should be prototyped as follows:

<pre>  char *ft_strcpy(char *dest, char *src);</pre> 

### Operation:

porque no son seguras las funciones strcpy y strncpy?

https://www.geeksforgeeks.org/why-strcpy-and-strncpy-are-not-safe-to-use/

La función strcpy() se utiliza para copiar la cadena de origen a la cadena de destino. Si el tamaño del búfer de la cadena dest es mayor que la cadena src, copie la cadena src en la cadena dest con el carácter NULL de terminación. Pero si el búfer dest es menor que src, copiará el contenido sin terminar el carácter NULL. Las cadenas no pueden superponerse y la cadena de destino debe ser lo suficientemente grande como para recibir la copia.

`char *strcpy( char *dest, const char *src )`


Problema con strcpy(): La función strcpy() no especifica el tamaño de la matriz de destino, por lo que el desbordamiento del búfer suele ser un riesgo. Usar la función strcpy() para copiar una matriz de caracteres grande en una más pequeña es peligroso, pero si la cadena encaja, entonces no valdrá la pena el riesgo. Si la cadena de destino no es lo suficientemente grande como para almacenar la cadena de origen, entonces el comportamiento de strcpy() no está especificado o indefinido.








|||
|:-|:-|
|code||
|<pre> char *ft_strcpy(char *dest, char *src)<br> {<br>    int i;<br>    i = 0;<br> <br>    while (cnt != '\0')<br>    {<br>       dest[i] = src[i];<br>       i++;<br>    }<br>    dest[i] = '\0';<br>    return (dest);<br> }<br> <br> // #include <stdio.h><br> // int  main(void)<br> // {<br> //      char    source[30] = {"This is the source string!"};<br> //      char    destination[225] = {"The"};<br> <br> //      printf("the result of ft_strcpy = %s\n",<br> //              ft_strcpy(destination, " an apple"));<br> //      printf("the result of ft_strcpy = %s\n",<br> //              ft_strcpy(destination, " a day"));<br> //      printf("the result of ft_strcpy = %s\n",<br> //              ft_strcpy(destination, " keeps"));<br> //      printf("the result of ft_strcpy = %s\n",<br> //              ft_strcpy(destination, "the doctor"));<br> //      printf("the result of ft_strcpy = %s\n",<br> //              ft_strcpy(destination, " away! "));<br> //      printf("the result of ft_strcpy = %s\n",<br> //              ft_strcpy(destination, source));<br> //      return (0);<br> // }<br> </pre> |![strcpy.png](strcpy.png) [strcpy1.png](strcpy1.png)|
