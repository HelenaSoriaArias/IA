# Laberinto

## Portada
* Alumno : Soria Arias Nora Helena
* Materia: Inteligencia Artificial
* Maestro: Alcaráz Chavéz Jesús Eduardo
* Fecha  : 07 de Diciembre del 2023

# Definición del problema.
Generar el espacio de estados de los siguientes problemas

1. El juego consiste en pasar las 3 ranas verdes a la derecha y las 3 ranas
marrones a la izquierda. Las ranas pueden saltar a una piedra vacía que
tengan delante, o saltar por encima de otra rana si en medio de ambas hay
una piedra vacía. Pulsa sobre la rana que quieres que salte.

2. Tres misioneros se perdieron explorando una jungla. Separados de sus
compañeros, sin alimento y sin radio, solo sabían que para llegar a su destino debían ir siempre hacia adelante. Los tres misioneros se detuvieron
frente a un río que les bloqueaba el paso, preguntándose que podían hacer.
De repente, aparecieron tres caníbales llevando un bote, pues también ellos querían cruzar el río. Ya anteriormente se habían encontrado grupos de
misioneros y caníbales, y cada uno respetaba a los otros, pero sin confiar
en ellos. Los caníbales se daban un festín con los misioneros cuando les
superaban en número.
Los tres caníbales deseaban ayudar a los misioneros a cruzar el río, pero
su bote no podía llevar más de dos personas a la vez y los misioneros no
querían que los caníbales les superaran en número.
¿Cómo puede resolverse el problema, sin que en ningún momento haya
más caníbales que misioneros en cualquier orilla del río? recuerda que un
misionero y un caníbal en una orilla del río más uno o dos caníbales en el
bote al mismo lado, significa que los misioneros tendrán problemas.


# Solución al problema de las ranas

Considerando las ranas ABC son las ranas verdes, y 123 son las ranas marrones.

Es posible resolverse con 20 movimientos, sin embargo estoy segura que hay más soluciones posibles.En el arhcivo [Archivo xlsx](/Tareas/TAREA_08/Ranas.xlsx) se pueden observar más a detalle los pasos, pero es aporpiado dejar aqui una explicación.

Cada renglón colorado es el estado actual después de un movimimiento

![Imagen](/Tareas/TAREA_08/Imagen.png)

Traduciendo lo anterior a una tabla, tenemos de un lado el movimiento que se hizo para llegar a ese estado y del otro el estado resultante expresado como un vector.

![Tabla](/Tareas/TAREA_08/Estados.png)

# Solución al problema de los misioneros

En la siguiente imagen se muestra el espacio de estados del problema para llegar la solución.M1, M2, M3 representan a los misioneros y C1,C2, C3 son los canibales. En el lado derecho se pueden apreciar los estados de los monjes y canibales después de hacer un movimiento, mientras que en el lado izquierdo aparece un grafó que determina los movimientos a seguir.

En el grafo se pueden apreciar caminos *Game Over*; estos caminos son todos los que provocan la muerte de los misioneros, por lo tanto son caminos indeseables. Siguiendo esa lógica, *Opc* significa opciones y se refiere a los posibles movimientos de barco que se pueden hacer, pero no todos son deseables y por lo tanto se continua por las opciones donde si son deseables.

![Solucion](/Tareas/TAREA_08/Problema.jpg)

Con toda esa información disponible, se puede hacer una tabla que identifique los estados de la solución.
La i represneta el lado izquierdo del rio, desde dónde empeiza el problema y D representa el laod D del río, a donde se quiere llegar.La columna *Movimientos* indica que acción se hizo para llegar a ese estado en especifico.

![Tabla](/Tareas/TAREA_08/Tabla.png)











