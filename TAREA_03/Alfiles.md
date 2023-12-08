# Alfiles

# Portada
Ensayo
* Alumno : Soria Arias Nora Helena
* Materia: Inteligencia Artificial
* Maestro: Alcaráz Chavéz Jesús Eduardo
* Fecha  : 07 de Diciembre del 2023

# Introducción

El presente documento muestra 1 solución para el problema de lógica matemática planteado en la sección *Descripción del problema*  y tiene como propósito mostrar la respuesta alcanzada a dicho problema.  En la sección  *Tablero y piezas* se muestra la representación  gráfica del tablero y los alfiles a utilizar; *Razonamiento* muestra el primer acercamiento a como construir la solución y *Algoritmo* da los pasos a la solución.

Por último, la respuesta final al ejercicio se encuentra en *Conclusiones*.

# Decripción del problema

Coloca ocho alfiles (cuatro negros y cuatro blancos) en un tablero de
ajedrez reducido, tal como se ve en la figura. El problema consiste en hacer
que los alfiles negros intercambien sus posiciones con los blancos, ningún alfil
debe atacar en ningún momento otro del color opuesto. Se deben alternar
los movimientos, primero uno blanco, luego uno negro, luego uno blanco y
así sucesivamente. ¿Cuál es el mínimo número de movimientos en que se
puede conseguir?

# Tablero y piezas

Considerando el siguiente tablero

|.|.|.|.|
|-|-|-|-|
|1|2|3|4|
|5|6|7|8|
|9|10|11|12|
|13|14|15|16|
|17|18|19|20|

Las piezas son:
|.|.|.|.|
|-|-|-|-|
|A|B|C|D|
|.|.|.|.|
|.|.|.|.|
|.|.|.|.|
|W|X|Y|Z|

# Razonamiento inicial

Antes de resolverse, se puede pensar de la siguiente manera:
1. Como los alfiles se mueven en diagonal, cada pieza ocupa al menos 2 saltos para llegar al otro lado. ----> 16M

2. Sin embargo,  los 4 alfiles de las orillas [A,D,W,Z] tienen movimientos limitados.
[B,C,X,Y] inicialmente pueden moverse tanto a la derecha como a la izquierda, pero  [A,D,W,Z] sólo tienen una dirección disponible. Esto significa que [B,C,X,Y] se moveran una vez más sólo para darle espacio a [A,D,W,Z] --->4M

Entonces 16M + 4M = 20M
Con los pasos:

1. A -> 16
2. Y -> 9
3. A -> 19
4. Y -> 6
5. B -> 12
6. X -> 13
7. B -> 18
8. Z -> 5
9. D -> 10
10. Y -> 1
11. D -> 20
12. Z -> 2
13. C -> 6
14. X -> 4
15. W -> 8
16. C -> 11
17. W -> 3
18. C -> 17

Cuando se realiza el algoritmo, te das cuenta que no es necesario que todas [B,C,X,Y] se muevan 3 veces (1 más para dar espacio), sino que basta con que 2 de ellas se muevan 3 veces. Dando así un total de **18M**

# Conclusión

La solución anterior es incorrecta.

El problema especifica que ningún alfil debe de poner en peligro a uno del color contrario. Desde mi perspectiva esto complica la solución, porque ahora se deben cambiar todos los movimientos para que no se ataquen entre sí.

Una posible solución sería crear un grafo de todos los movimientos posibles que se pueden hacer en el juego, lo cual intente sin mucho éxito, ya que el grafo en cuestión crece de manera exponencial a medida que avanzan los movimientos.

Entonces, ¿Cuál es el mínimo de movimientos para intercambiar a los alfiles?

### La respuesta es 36 movimientos.
A continuación se muestran los movimientos que deberían de hacerse

1.  X->15 
2.  C->6
3.  W->8
4.  D->13
5.  Y->14
6.  B->7
7.  X->5
8.  C->16
9.  W->3
10. D->18
11. Y->9
12. B->12
13. X->10
14. C->11
15. Y->19
16. B->2
17. X->4
18. C->17
19. Z->10
20. A->11
21. W->9
22. D->12
23. Z->13
24. A->8
25. Y->16
26. B->5
27. Y->1
28. B->20
29. W->6
30. D->15
31. Z->7
32. A->14
33. W->3
34. D->18
35. Z->2
36. A->19

Esta respuesta no fue inventada por mí, sino por el matemático Henry Dudeney (1857-1930) quién no sólo diseño el problema, sino también la solución de los 36 pasos. Reconozco que no podría dar por mi cuenta con una solución tan compleja como la de Dudeney aunque me dedicara 1 año en pensar una solución o que necesitaría una herramienta que automatizará el desarrollo del grafo para resolver el problema.





