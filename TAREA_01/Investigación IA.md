# Investigación de la Inteligencia Artificial

## Portada
Ensayo
* Alumno : Soria Arias Nora Helena
* Materia: Inteligencia Artificial
* Maestro: Alcaráz Chavéz Jesús Eduardo
* Fecha  : 07 de Diciembre del 2023

## Introducción
El presente documento es una investigación sobre la inteligencia artificial, abarcando sus aspectos más importantes como su definición, historia y personajes relevantes y la descripción de los tipos de inteligencia artificial en ese orden.

## ¿Qué es la Inteligencia Artificial?

De acuerdo con Oracle[1] la inteligencia artificial es cualquier aplicación que automatiza una tarea que, de otro modo, tendría que ser realizada por un humano y se enfoca mucho en el aspecto comercial de la IA y como las empresas en la actualidad pueden conseguir ganancias al implementar la IA en sus sistemas, sin embargo su definición deja mucho que desear, porque no detalla que hace la IA, o como lo hace.

Definiciones más filosoficas se encuentran con Konar[2] y Haugeland[3] quienes antes de definir la inteligencia artificial cuestionan a la inteligencia en si misma, para después concluir que la inteligencia artificial es la simulación computacional de la mente humana utilizada para resolver problemas.  

Konar se centra en el aspecto de **racionalidad** de las máquinas y la capacidad de planeación y aprendizaje hasta el punto de decir que una máquina que no hace planes ni aprende no se puede considerar una máquina inteligente, mientras que Haugeland[3]  detalla las limitaciones que tienen los computadores en comparación con los seres humanos, no cuentan con voluntad propia ni sentimientos y nunca prodrá expresar su estilo artístico ya que sólo se limita a seguir instrucciones de código generadas por humanos.

Un tercer enfoque lo presente Serrano, Soria y Martín[4] al describir la IA como un campo multidisciplinario que se centra en la creación de máquinas inteligentes, esta es la definición más cercana a primera definición de inteligencia artificial propuesta por John McCarthy de 1955.

## Historia de la Inteligencia Artificial

Auque la inteligencia artificial halla aparecido en la filósfía, matemáticas y computación en anterioridad, el trabajo de  Warren S. McCulloch y Walter Pitts en 1943 es el primer documento en darle estructura a esta disciplina.EL modelo neuronal de Walter y Pitts es el primer modelo neuronal artificial.

Este modelo describe las características y capacidades funcionales de una neurona artficial como un dispositivo lógico-matemático, poniendo mucho enfoque en la parte matemática, porque utilizar este modelo requiere de exhaustivas comprobaciones en los cálculos de su desarrollo. A continuación se describe el comportamiento de las neuronas propuestas por McCullo y Pitts :

>

lo que hace muy complejo el entender los planteamientos del artículo.
McCulloch y Pitts parten de cinco consideraciones acerca del comportamiento de las neuronas.
Dichas consideraciones las plantean de la siguiente forma:
1. La actividad neuronal es un proceso "todo o nada".
2. Un cierto número fijo de sinápsis debe ser excitado dentro de un período de adición
latente en orden de excitar una neurona en cualquier intervalo de tiempo, y este
número es independiente de la actividad previa y la posición de la neurona.
3. El único retardo significativo dentro del sistema es el retardo sináptico.
4. La actividad de cualquier sinápsis inhibitoria previene absolutamente la excitación de la
neurona en ese intervalo de tiempo.
5. La estructura de la red no cambia con el tiempo.
Estas consideraciones describen a lo que se ha conocido como la neurona "McCulloch-Pitts".
De las consideraciones mostradas podemos extraer y resaltar lo siguiente. La neurona McCullochPitts es un dispositivo binario, es decir, solo puede estar en uno de dos posibles estados. Cada
neurona puede recibir entradas de sinápsis excitadoras, las cuales tienen todas un mismo peso.
También pueden recibir entradas de sinápsis inhibitorias, cuya acción es absoluta; es decir, si la
sinápsis inhibitoria está activa, la neurona no puede encender. Hay un lapso de tiempo dado fijo
para la integración de las entradas sinápticas, basado en el retardo sináptico observado; esto le da
a la neurona su carácter de trabajo en tiempo discreto.
Al hacer estas consideraciones, los autores comienzan trabajando con arreglos lineales de
neuronas, es decir, consideran que no hay vías de retroalimentación entre neuronas, y parten de
una serie de simplificaciones en las que consideran que el umbral de disparo en las neuronas
adopta valores discretos, y que estos umbrales también se mantienen inalterados. Estas últimas
consideraciones les permiten demostrar el funcionamiento de su neurona, para posteriormente
demostrar que mediante la realización de diversos arreglos y conexiones de neuronas de este tipo,
entre los que se encuentran algunos arreglos cíclicos de neuronas, es posible producir los mismos
resultados que con neuronas con umbrales cambiantes con el tiempo.
El modo de operación de la neurona McCulloch-Pitts es simple. Durante el tiempo de integración,
la neurona responde a la actividad de su sinápsis, la cual refleja el estado de las células
presinápticas. Si no hay sinápsis inhibitorias activas, la neurona suma sus entradas sinápticas y
verifica si la suma de ellas alcanza o excede su nivel de umbral. Si lo hace, entonces la neurona se
vuelve activa. Si no, la neurona permanece inactiva. En caso de que exista alguna sinápsis
inhibitoria activa, la neurona permanece inactiva.











## Tipos de inteligencia artificial

## Machine Learning
Machine Learning es una rama de la inteligencia artificial que se centra en crear programas o sistemas capaces de aprender por medio de la experiencia, esto se traduce en un programador definiendo las reglas de aprendizaje una única vez y despúes el programa mejorando sus procesos autómaticamente por medio de la inducción de grandes volúmenes de datos.

Bagnato indica que la primera parte del Machine Learning es conocida como EDA o Análisis Exploratorio de Datos: un EDA tiene 2 prerrequisitos, un conjunto de datos a analizar y un objetivo del análisis. Al finalizar un EDA se consiguen conclusiones sobre el conjunto de datos, y de esas conclusiones se espera que los programadores o stakeholders tomen decisiones. Una de las conclusiones más inesperadas incluso es que no es necesario continuar con el proceso de Machine Learning, pero esta conclusion es muy importante, porque los programadores pueden ahorrar tiempo y dinero si descubren a tiempo que el Machine Learning no era la solución a su problema


## Redes Neuronales Artificiales
Serrano, Soria y Martín explican las redes neuronales empezando por el concepto de neurona, la cual es la partícula mínima significativa del cerebro y donde millones de ellas forman enlaces jerarquicos que reciben el nombre de capas, al menos desde el punto de vista de la neurología; en este caso las neuronas artificiales hacen analogía a las neuronas humanasy son expresadas en terminos de computación. 

Hay ciertas características importantes que deben de contar las redes neuronales artificiales:
1. Son elementos no lineales, por lo que cuentan con menos restricciones en la formación de enlaces.
2. Son tolerantes a fallos: si una neurona falla el resto de las neuronas pueden continuar trabajando sin problemas.
3. Son adaptables: Con ciertos límites, pero en general es muy sencillo reemplazar los parámetros de entrada de datos.

Las partes de una red neuronal, y las cuales no pueden nunca faltar son:
1. Función de activación
2.
3.

Pero la ventaja real de implementar una red neuronal artificial no yace en sus características, sino en el procesamiento de información en paralelo que estás permiten.


## Aplicaciones de la Inteligencia Artficial
Bramer[5] explora las aplicaciones de la inteligencia artificial diviendola por áreas de la investigación, de lo más relevenate que se encuentra son las aplicaciones médicas, educativas, financieras y electronicas. A continuación se muestra una selección de las más importantes.


## Referencias

1. Oracle. ***¿Qué es la IA? Conoce la inteligencia artificial.*** Recueprado el 07/12/2023 de [https://www.oracle.com/mx/artificial-intelligence/what-is-ai/#ai-terms]

2. Konar, A. (1999). ***Artificial inteligence and Soft Computing: Behavorial and Cognitive Modeling of the Human Brain.*** CRC Press.

3. Haugeland, J. (1989). ***Artificial Intelligence: The very idea.*** Brandford Books.

4. Serrano A.J., Soria E., Martín J.D. (2010). ***Redes neuronales artificiales.*** Universidad de Valencia.

5. Bramer M., Devedzic V. (2004). ***Artificial Intelligence Applications and Innovations.***
Kluver Academic Publishers.

6. Bagnato J. I. ***Aprende Machine Learning.***

7. ***EL MODELO NEURONAL DE McCULLOCH Y PITTS: Interpretación Comparativa del Modelo***
