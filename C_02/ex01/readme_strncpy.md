|||
|:--|:--|
|ft_strncpy.c||
|Files to turn in : ft_strncpy.c||
|Allowed functions : None ||

<br>


- Reproduce the behavior of the function strncpy (man strncpy).

- The function should be prototyped as follows:

<pre>  char	*ft_strncpy(char *dest, char *src, unsigned int n);</pre> 

### Operation:

`S1` = destino.
`S2` = origen.

La función `strcpy()` copia la cadena apuntada por src, incluyendo el byte nulo de terminación ('\0'), al buffer apuntado por dest.  Las cadenas no pueden solaparse, y la cadena de destino `dest`  debe ser lo suficientemente grande como para recibir la copia (por lo tanto la medida la fijamos en la declaración ).

La función `strncpy()` es similar, excepto en que se copian como máximo `n` bytes de src.  (un valor que lo que hace es limitar, basicamente.)

Copia cadena de longitud fija, devolviendo un puntero al extremo de la matriz

Las funciones `stpncpy()` y `strncpy()` no copiarán más de n bytes (valor de limitación) (los bytes que siguen a un carácter NUL no se copian) de La matriz señalada por S2 a la matriz señalada por S1. 

Si la matriz señalada por `S2` es una cadena de menos de n bytes, se agregarán caracteres NUL a la copia de la matriz. apuntado por `S1` , hasta que se escriban n bytes en total. Si la copia tiene lugar entre objetos que se superponen, el comportamiento no está definido.

Si se escribe un carácter NUL en el destino, la función stpncpy() devolverá la dirección del primer carácter NUL. De lo contrario, devolverá &s1[n]. La función strncpy() devolverá s1. No se reservan valores devueltos para indicar un error.

**Advertencia**: Si no existe ningún byte nulo entre los n bytes de src que se van a copiar, la cadena colocada en dest no terminará en nulo.

`while (src[i] != '\0' && i < n):`

- Mientras que el caracter que estamos leyendo sea diferente a `\0` y el indice sea menor que el numero de caracteres que le hemos pasado por parametros entonces copia el contenido de un array al otro.
- En el momento en el que lee `\0` pasa al `while (i < n)` y aqui es donde se incluye `\0` en el array de destino mientras que la condición `i < n` persista, es decir que el valor de la i sea menor que el valor que le hemos pasado por parametro.

- Sin embargo si en el primer while la cantidad de caracteres que queremos copiar NO detectamos la sequencia de escape `\0`  por que el numero que pasamos por parametro es inferior al valor de indice donde `\0` se encuentra, entonces salimos de la estructura de loops sin haber introducido el caracter de final de array de caracteres.

- *Recuerda:* Que si introduces los caracteres `abc\0` de manera explicita `\0` se considera un solo caracter y lo interpretará como una de las secuencias de escape.



|||
|:-|:-|
|code||
|<pre> <br> char	*ft_strncpy(char *dest, char *src, unsigned int n)<br> {<br> 	unsigned int	i;<br> <br> 	i = 0;<br> 	if (n > 0)<br> 	{<br> 		while (src[i] != '\0' && i < n)<br> 		{<br> 			dest[i] = src[i];<br> 			i++;<br> 		}<br> 		while (i < n)<br> 		{<br> 			dest[i] = '\0';<br> 			i++;<br> 		}<br> 	}<br> 	return (dest);<br> }  </pre> |![strncpy.png](strncpy.png)|
