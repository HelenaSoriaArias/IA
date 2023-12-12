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

Este modelo describe las características y capacidades funcionales de una neurona artficial como un dispositivo lógico-matemático, poniendo mucho enfoque en la parte matemática, porque utilizar este modelo requiere de exhaustivas comprobaciones en los cálculos de su desarrollo. 

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

Poco después, en  1950, se puede apreciar el trabajo de Alan Turing, quién dibujo una linea muy clara entre lo que podían hacer las máquinas y lo que no podían hacer en su artículo *Computing Machinery and Intelligence* y el consiguiente *Test de Turing* que sirve para diferenciar un humano de una máquina; de acuerdo con Russell & Norgvig[7] para poder pasar este test una máquina requiere:

>• Procesamiento de lenguaje natural que le permita comunicarse satisfactoriamente
en inglés.
>
>• Representación del conocimiento para almacenar lo que se conoce o siente.
>
>• Razonamiento automático para utilizar la información almacenada para responder a preguntas y extraer nuevas conclusiones.
>
>• Aprendizaje automático para adaptarse a nuevas circunstancias y para detectar y extrapolar patrones.
>
>• Visión computacional para percibir objetos.
>
>• Robótica para manipular y mover objetos.


En 1952, Arthur Samuel creó un software capaz de aprender a jugar ajedrez de forma autónoma, sin embargo no contaba con los recursos para probarlo hasta que estuvo trabajando como investigador en IBM en 1954  que tuvo acceso a la IBM 701, y eventualmente a la IBM 704. Samuel cuenta que: 

>*Había muchas máquinas en la fábrica y desde medianoche hasta la siguiente mañana no se usaban. Entonces me dejaron poner mi programa de damas y pude correrlo por muchas horas contínuas. Tenía hasta cuatro máquinas que jugaban entre sí y se iban acumulando datos y estadísticas de sus esquemas de juego. Esto se hizo por muchos meses y la gente de IBM estaba contenta porque fue una manera de probar el desempeño de sus equipos*.

Fue hasta 1956 que se acoplo el término inteligencia artificial durante el taller *Dartmouth Summer Research Project on Artificial Intelligence* de John McCarthy y que le hizo merecedor del titulo de *Padre de la Inteligencia Artificial*. Durante los siguientes 50 años McCarthy hy sus estudiantes fueron los que dorminaron el campo de la IA, creando el lenguaje de programación **LISP** y la teoría del tiempo-compartido en computación.

En 1959, Arthur Samuel acuñó el término Machine Learning mientras trabajaba en IBM. Por su parte, John McCarthy y Marvin Minsky fundaron el MIT Artificial Intelligence Project. En 1963, John McCarthy también creó el «AI Lab» en la Universidad de Stanford.
## Tipos de inteligencia artificial

## Machine Learning
Machine Learning es una rama de la inteligencia artificial que se centra en crear programas o sistemas capaces de aprender por medio de la experiencia, esto se traduce en un programador definiendo las reglas de aprendizaje una única vez y despúes el programa mejorando sus procesos autómaticamente por medio de la inducción de grandes volúmenes de datos.

Bagnato indica que la primera parte del Machine Learning es conocida como EDA o Análisis Exploratorio de Datos: un EDA tiene 2 prerrequisitos, un conjunto de datos a analizar y un objetivo del análisis. Al finalizar un EDA se consiguen conclusiones sobre el conjunto de datos, y de esas conclusiones se espera que los programadores o stakeholders tomen decisiones.

Una de las conclusiones más inesperadas incluso es que no es necesario continuar con el proceso de Machine Learning, pero esta conclusion es muy importante, porque los programadores pueden ahorrar tiempo y dinero si descubren a tiempo que el Machine Learning no era la solución a su problema.

Para un EDA, se puede utilizar por ejemplo la regresión lineal, este es un algoritmo  que dibuja una recta que nos
indicará la tendencia de predicción. de un conjunto de datos continuos y se apoya con la formula de la recta: Y = mX + b. Algunos ejemplos de uso son predecir la cantidad de veces que será compartida una noticia en la red teniendo de antemano datos sobre este tipo de articulos.

Si el problema no tiene datos continuos es mejor utilizar la regresión lógistica, que no da cómo resultado una recta, y si ninguno de los 2 sirve se puede probar con un árbol de decisión.Los arboles de decisión son representaciones gráficas de posibles soluciones a una decisión basadas en ciertas condiciones. Tienen un primer nodo llamado raíz (root) y luego se descomponen en dos ramas planteando una condición que puede ser cierta o falsa. Se bifurca cada nodo en 2 y vuelven a subdividirse
hasta llegar los nodos finales y que equivalen a respuestas a la solución: Si/No.


## Redes Neuronales Artificiales

Serrano, Soria y Martín explican las redes neuronales empezando por el concepto de neurona, la cual es la partícula mínima significativa del cerebro y donde millones de ellas forman enlaces jerarquicos que reciben el nombre de capas, al menos desde el punto de vista de la neurología; en este caso las neuronas artificiales hacen analogía a las neuronas humanasy son expresadas en terminos de computación. 

Hay ciertas características importantes que deben de contar las redes neuronales artificiales:
1. Son elementos no lineales, por lo que cuentan con menos restricciones en la formación de enlaces.
2. Son tolerantes a fallos: si una neurona falla el resto de las neuronas pueden continuar trabajando sin problemas.
3. Son adaptables: Con ciertos límites, pero en general es muy sencillo reemplazar los parámetros de entrada de datos.

Las partes de una red neuronal, y las cuales no pueden nunca faltar son:
1. Función de activación
2. Sinapsis
3. Sumador
4. Umbral

Pero la ventaja real de implementar una red neuronal artificial no yace en sus características, sino en el procesamiento de información en paralelo que estás permiten.


## Aplicaciones de la Inteligencia Artficial
Bramer[5] explora las aplicaciones de la inteligencia artificial diviendola por áreas de la investigación, de lo más relevante que se encuentra son las aplicaciones médicas, educativas, financieras y electronicas.

1. IA en las micromecánicas
La IA testea procesos de manufacturación en micromecánicas (réplicas  o prototipos de la máquinas de manufacturación en escala) para disminuir los costos de la innovación en los procesos.

2. IA en el diagnostico médico
Se alimenta una IA  de casos médicos y se espera que la IA sea capaz de dar un diagnostico correcto. Uno de los problemas más grandes es la compartición de sintómas entre enfermedades, haciendo difícil que se llegue a la conclusión adecuada sin más información.

3. IA en los mercados eléctronico 
Con la inteligencia artificial se crean entornos virtuales que simulen los diferentes procesos de los mercados eléctronicos, de manera que se puedan identificar debilidades y oportunidades lo más pronto posible.A la larga esto mejora la experiencia tanto de vendedores como de compradores.

4. IA en la estimación de estrellas
No se refiere a esstimaciones de distancia, sino a estimaciones de aspectos físicos y químicos en las estrellas. La lumninosidad, la absorción de carbono y la cantidad de metales presentes son algunas de estas características; haciendo más facíl el trabajo de los investigadores.

5. IA en la robótica
Se utiliza la IA en la creación de programas para *robots evolucionarios*, este tipo de robot se caracteriza por aprender con el tiempo, entonces la IA debe modelar el algoritmo de aprendizaje de dicho robot.

6. IA en las smart-houses
La casas inteligentes no son un concepto nuevo, pero con IA se le pueden agregar nuevas funciones como gas, iluminación y temperatura. Además de controlar el flujo de agua y electricidad, se espera que pueda identificar a los habitantes de la casa y se adapte a las preferencias de los mismos

7. IA en la tutoría
Por medio de IA se creó de manera experimental un tutor de matemáticas que toma en cuenta las preferencias del alumno, su curriculum y su avance sobre el tema. En su desarrollo tuvieron que meterse metodologías de parendizaje derivadas de la pedagogía.

8. IA en la captura de HTML relevante
Este caso trata de utilizar IA como un algoritmo de busqueda de HTML relevante en el internet, recordando que con la cantidad de información que se sube al internet hay 1.5 billones de páginas y es esencial diferenciar lo más relevante. Por medio de un algoritmo de representación de texto y K-vecinos se encuentra la respuesta más cercana a lo que busca el usuario.

9. IA como asistente virtual
En específico en el campo financiero, con ayuda de IA se creo un agente virtual que da consejos adaptados a la situación economica del usuario. Esto significa que no sólo debe de ser capaz de expresarse en lenguaje natural, sino analizar diversas variables socio-economicas para descubrir el mejor curso de acción (financieramente) del usuario.
 
10. IA en *schedulling problems*
Los *schedulling problems* son los problemas derivados de la paralelización de cómputo (presencia de múltiples procesadores trabajando al mismo tiempo) , dónde es necesario tener una priorización y planeación de tareas. Por medio de la IA se generan y prueban algoritmos de planeación y se espera encontrar la planeación más eficiente de las tareas (menor tiempo y menos recursos) y reciben el nombre de *algoritmos geneticos*, porque evaluan la evolución de las tareas al tomar decisiones.

## Referencias

1. Oracle. ***¿Qué es la IA? Conoce la inteligencia artificial.*** Recuperado el 07/12/2023 de [https://www.oracle.com/mx/artificial-intelligence/what-is-ai/#ai-terms]

2. Konar, A. (1999). ***Artificial inteligence and Soft Computing: Behavorial and Cognitive Modeling of the Human Brain.*** CRC Press.

3. Haugeland, J. (1989). ***Artificial Intelligence: The very idea.*** Brandford Books.

4. Serrano A.J., Soria E., Martín J.D. (2010). ***Redes neuronales artificiales.*** Universidad de Valencia.

5. Bramer M., Devedzic V. (2004). ***Artificial Intelligence Applications and Innovations.***
Kluver Academic Publishers.

6. Bagnato J. I. ***Aprende Machine Learning.***

7. RUSSELL, S. J.; NORVIG, P. **INTELIGENCIA ARTIFICIAL. UN ENFOQUE MODERNO.** Segunda edición. PEARSON EDUCACIÓN, S.A., Madrid, 2004
