# printf
Este es un proyecto del common core de 42
## Descripción del proyecto
Este proyecto consiste en replicar la función de printf de la libreria <stdio.h>. Para ello es necesario implementar las siguientes conversiones:
|Conversión|Descripción                                               |
|----------|----------------------------------------------------------|
|%c        |Imprime un unico caracter                                 |
|%s        |Imprime una cadena de caracteres (string)                 |
|%d        |Imprime un digito en base 10                              |
|%u        |Imprime un digito en base 10 sin signo                    |
|%i        |Imprime un entero en base 10                              |
|%p        |Imprime el puntero void dado como argumento en hexadecimal|
|%x        |Imprime el numero en base 16 en minusculas                |
|%X        |Imprime el numero en base 16 en mayusculas                |
|%%        |Imprime el simbolo %                                      |

La funcion devuelve el numero de caracteres impresos o -1 en caso de error. No debe implementar la gestión del buffer del original.

## Descripción de funciones
### ft_printf.c
- **ft_printf**: Imprime los caracteres de la cadena y gestiona las converiones mediante funciones variadicas.
- **put_variable**: Delimita que tipo de conversión es la mandada.
### ft_printf_utils.c
- **put_char**: Imprime un caracter.
- **put_str**: Imprime un string.
- **put_nbr**: Imprime un numero con o sin signo.
- **put_hex**: Imprime un numero en base 16 en minusculas o en mayusculas.
- **put_ptr**: Imprime el puntero pasado como argumento en hexadecimal
## Compilación
La compilación de este proyecto genera una libreria que puede ser usada en otros proyectos.
Para compilar la libreria se hace uso del siguiente comando:
    make
Una vez compilada se compila en un proyecto como:
    cc -Wall -Wextra -Werror tu_main.c ft_libft.a
## Objetivos de Aprendizaje
- Gestión de funciones variadicas
- Manejo de tipo de datos y conversiones
## Más sobre mi 
- Para ver mi progresion en el common core 42 [AQUI](https://github.com/pmelo-cl/42Cursus)
