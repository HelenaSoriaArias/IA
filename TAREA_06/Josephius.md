# Problema de Josephius (O problemade Falvio Josefo)

## Portada
* Alumno : Soria Arias Nora Helena
* Materia: Inteligencia Artificial
* Maestro: Alcaráz Chavéz Jesús Eduardo
* Fecha  : 07 de Diciembre del 2023


# Descripción del problema
La historia que sigue es una versión adaptada de lo que –supuestamente— sucedió durante el siglo I. Sí, el siglo uno. Suena raro, ¿no? Más aún: esa
historia dio origen a un problema clásico de la matemática/computación que
sobrevivió el paso del tiempo. Se lo conoce con el nombre del “Problema de
Josephus”, ya que se supone que fue Flavius Josephus, un historiador judío
nacido en Jerusalén, quien describió la situación que vivieron él y 40 soldados
que lo acompañaban.

En un momento determinado de la guerra judeo-romana, Josephus y
su grupo cayeron en una emboscada y quedaron atrapados en una caverna
rodeada de soldados enemigos. Después de debatir cómo proceder, optaron
por suicidarse antes de ser capturados. Sin embargo, Josephus no estuvo
de acuerdo con la propuesta y para que nadie tuviera que quitarse la vida,
propuso el siguiente método:

“Sentémonos todos en un círculo. Alguno de nosotros empezará primero
y matará a quien tenga sentado a la izquierda y así vamos a seguir hasta que
–claramente— quedará nada más que uno solo de nosotros con vida. Ese
será el único que tendrá que suicidarse”.

Allí están las cuarenta y un posiciones numeradas en forma creciente.
Supongamos que empieza el que está sentado en la posición número 1. Ese
soldado matará al 2. Luego, el 3 matará al 4, el 5 al 6. . . y así siguiendo.
Como usted advierte, llegará un momento en el que habrán muerto todos los
que están sentados en las posiciones que llevan un número par. Pero cuando
muera el último de ellos, el número 40 (a manos del 39), el 41 estará vivo
aún y ahora, el que tiene sentado a la izquierda es el número 1 quien había
empezado con los asesinatos.
De acuerdo con las reglas, el 41 matará al 1, el 3 matará al 5, etc. Creo
que ahora está claro que van a morir todos hasta que quede solamente uno
con vida.

Es aquí donde aparece una parte interesante de la historia de Josephus.
En principio, habrían de morir todos los soldados que estaban con Josephus
en la caverna, pero la diferencia es que quien quedara último tendría que
suicidarse. . . Más aún: el sobreviviente tendría que quitarse la vida y no
habría ningún otro integrante del grupo que estuviera vivo para verificar que
lo hiciera.

Como usted se imagina, Josephus eligió un lugar particular del círculo y
se sentó allí. El sabía que siguiendo las reglas escritas más arriba, él habría
de quedar como único sobreviviente. Esperó que todos estuvieran muertos,
y en lugar de suicidarse, salió de la caverna y se entregó al enemigo.
Pregunta: ¿en qué lugar se sentó Josephus?

El problema es muy conocido en el mundo de la matemática y los programadores, y es por eso que hay muchísima literatura escrita sobre el tema,
pero no hace falta saber nada particular para poder pensarlo. La versión
que figura más arriba es solo una de las posibles variantes (la más sencilla)
y si yo estuviera junto a usted, le sugeriría que no empiece con el caso de
los 41 soldados, sino que intente con números más pequeños (de soldados)
de manera tal de ver si le es posible intuir o imaginar una estrategia para
determinar al ganador o sobreviviente a medida que va incrementando el
número de soldados.
De la misma forma, una vez que hayamos resuelto el problema para
41 soldados, sería interesante pensar en una estrategia que permita deducir
cuál será la posición ganadora en el caso general, es decir, independizarse del
número 41 y encontrar alguna estrategia o fórmula que permita deducir el
número que hay que elegir sin tener que recorrer todos los pasos intermedios.


# Solución:
 Respuesta: Josephius se puso en la posición 19

Hay varias maneras de averiguar esto, la más sencilla es hacer el calculo manual de quienes mueren en cada ronda hasta que sólo quedé 1. Para 41 participantes se ocupan 5 rondas.

 |Ronda|Sobrevivientes|
 |-----|--------------|
 |1|1,3,5,7,9,11,13,15,17,19,21,23,25,27,29,31,33,35,37,39,41|
 |2|3,7,11,15,19,23,27,31,35,39|
 |3|3,11,19,27,35|
 |4|19,35|
 |5|19|

Sin embargo,este proceso se extiende mientras más grande sea la cantidad de integrantes en el círculo; mientras que lo que se busca es una manera rápida de calcular quién sobrevive. Para ello primero hay que recopilar información:

La tabla muestra la cantidad de integrantes del circulo y quién es el sobreviviente del circulo.Se creo esta tabla para agilizar la detección de patrones. Al usar la tabla como recurso visual se identifican ciertas similitudes o patrones en la cantidad de sobrevivientes.

|Cantidad|Sobreviviente|
|--------|-------------|
|1|1|
|2|1|
|3|3|
|4|1|
|5|3|
|6|5|
|7|7|
|8|1|
|9|3|
|10|5|
|11|7|
|12|9|
|13|11|
|14|13|
|15|15|
|16|1|
|17|3|
|18|5|
|19|7|
|20|9|
|21|11|
|22|13|
|23|15|
|24|17|
|25|19|
|26|21|
|27|23|
|28|25|
|29|27|
|30|29|
|31|31|
|32|1|
|33|3|
|34|5|
|35|7|
|36|9|
|37|11|
|38|13|
|39|15|
|40|17|
|41|19|

Con esta tabla se puede empezar a formar una función

f(x) = 1 si x= 2^n
x = cantidad de personas
n = entero positivo
Como es el caso de 1,2,4,8,16,32 ... que son potencia de 2.

¿Y con los demás casos?

Es evidente que el superviviente siempre es un número impar que se reinicia con una potencia de 2 y aumenta gradualmente. Pero para poder calcular f(x) generalizadamente se requieren más calculos pero siguen siendo operaciones básicas y un poco de lógica.

f(x) 2z + 1 si x!=2^n

z= x-y

y= 2^n máximo menor a x

Ejemplo:

f(18) = 2z +1;

y = 16, porque 16 la potencia de 2 más grande que cabe en 18(x)

z = x-y = 18-16

f(18) = 2z +1 = 2(2)+1 = **5**

Entonces, si en el circulo de Josephius había 41 personas

f(41) = 2z+1;

y = 32, porque 32 es la potencia de 2 más grande que cabe en 32(x)

z= 41-32 = 9

f(41) = 2(9)+1 = **19**


