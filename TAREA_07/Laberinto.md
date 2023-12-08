# Laberinto

## Portada
* Alumno : Soria Arias Nora Helena
* Materia: Inteligencia Artificial
* Maestro: Alcaráz Chavéz Jesús Eduardo
* Fecha  : 07 de Diciembre del 2023


# Descripción del problema
1. Dado el siguiente laberinto

• Definir que es la heurística y cual es su papel en la resolución de
problemas

• Resolver con recursividad, programar.

• Proponer Algoritmo de Solución, programar.

• Describir el punto anterior.

![Imagen del laberinto](/Tareas/TAREA_07/Imagen.png) 

 # Heurística

 Como definición formal tenemos: ***Conjunto de técnicas o métodos para resolver un problema. La palabra heurística es de origen griego εὑρίσκειν que significa “hallar, inventar”. En este sentido, se puede afirmar que se relaciona con la toma de decisiones a fin de solucionar un problema, sin asegurar que la opción tomada sea la más idónea. Principios heurísticos, son los que establecen sugerencias para encontrar la solución idónea al problema. Reglas heurísticas, son las que señalan los medios para resolver el problema. Estrategias heurísticas, son aquellas que permiten organizar los materiales o recursos compilados que contribuyen a la búsqueda de la solución del problema.***[1]

En lo personal, la heurística forma parte de la capacidad humana de resolver problemas, desde tiempos inmemoriables los humanos han estado resolviendo todo tipo de problemas, y en consecuencia se han desarrollado algoritmos, trucos o estrategias para desarrollar y poner en práctica esta capacidad. Lo único que ha cambiado es el tipo de problemas que resolvemos y por eso la heurística esta en constante movimiento.

# Detalles del código

1. Crear la matriz del laberinto, donde:
    Pared   = 1
    Pasillo = 0
    Meta    = 9
Se entiende que sólo se puede caminar por el pasillo.


2. El número 2 representa los lugares por los que ya pasó el humano.

3. El programa tiene que utilizar recurividad. 

# Algoritmo de la función recursiva

## Partes de la función recursiva
    1. Posición [x,y] del elemento en el laberinto representado con una matriz de 9x9.

    2. Casos base:
        1. Estas en la casilla META, hay que retornar.
        
        2. La casilla meta ya fue encontrada, hay que retornar hasta la primera llamada a la función.
        
        3. Llegó a un callejon sin salida, hay que retornar hasta una bifurcación.

    3. Casos Recursivos.
        1. Ir a la derecha.
        2. Ir hacia abajo.
        3. Ir hacia arriba.
        4. Ir a la izquierda.

## Algoritmo
    1. Si es la casilla META, retornar, si no es,poner la casiila en 2 para indicar que ya pasamos por aquí.

    2. Si se puede mover a la derecha, mandar un caso recursivo a la derecha, si no se puede, continuar en la función.

    3. Si se puede mover hacia abajo, mandar un caso recursivo a abajo, si no se puede, continuar en la función.

    4. Si se puede mover hacia arriba, mandar un caso recursivo a arriba, si no se puede, continuar en la función.

    5. Si se puede mover a la izquierda, mandar un caso recursivo a la izquierda, si no se puede, continuar en la función.

    6. Si ha llegado a este punto y no ha encontrado la META, es que ha encontrado un callejón sin salida.

    7. Si hay camino hacia la izquierda, regrese sobre sus pasos por la izquierda hasta la última bifurcación con un return.Si no se puede, continuar en la función.

    8. Si hay camino hacia arriba, regrese sobre sus pasos hacia arriba hasta la última bifurcación con un return. Si no se puede, continuar con la función.

    9. Si hay camnino hacia abajo, regrese sobre sus pasos hacia abajo hasta la última bifurcación con un return.

Con este algoritmo y el mapa ya mencionado, el humano recorrera todo el mapa antes de encontrar la solución, porque el camnino más corto es priorizando moverse hacia la izquierda y hacia abajo.


# Código

El código se adjunta en el archivo [Laberinto](Tareas\TAREA_07\Laberinto.cpp).


# Referencias
 Editorial, Equipo (25/09/2017). "Significado de Heurística". En: Significados.com. Disponible en: https://www.significados.com/heuristica/ Consultado: 3 de diciembre de 2023, 10:58 pm.

