# Rojo

## Portada
Ensayo
* Alumno : Soria Arias Nora Helena
* Materia: Inteligencia Artificial
* Maestro: Alcaráz Chavéz Jesús Eduardo
* Fecha  : 07 de Diciembre del 2023


# Introducción
El presente documento muestra la solución para el problema de lógica matemática planteado en la sección *Descripción del problema*  y tiene como propósito mostrar la respuesta alcanzada a dicho problema. En la sección 
*Descripción de la solución* se muestra como alcanzar el exito en este programa, mientras que en *Código*  se aprecia el código resultante de la solución y en *Conclusiones* se dan los pensamientos finales sobre el problema.

# Descripción del problema
Contar los elementos que tienen el color rojo de la imagen

 ![Rojo](/Tareas/TAREA_05/Rojo.jpg)

# Descripción de la solución

La explicación de la solución viene de la mano con el código, entonces se va dar explicación parte por parte.
Empezando porque se utiliza el lenguaje de programación Python y la libería OPEN CV que se ha estado manejando durante la clase de Inteligencia Artificial del profesor Alcaráz Chavéz Jesús Eduardo. 

1. El primer paso es recuperar la imagen
2. El segundo pasarla a modelo de color HSV, esto se explica de la siguiente manera:

> El espacio de color HSV (matiz, saturación, valor) es un modelo para representar el espacio de color similar al modelo de color RGB. Dado que el canal de matiz (H) modela el tipo de color, es muy útil en tareas de procesamiento de imágenes que necesitan segmentar objetos en función de su color. La variación de la saturación (S) puede entenderse como qué tan fuerte es el color que vemos; pasa de no saturada a representar sombras de gris y completamente saturada (sin componente blanco). El canal de valor (V) describe el brillo o la intensidad del color. **(Guiseppe, 2019)**

Durante el tiempo de clase ya se había mencionado lo útil que era este modelo de color para la transformación de imagenes, pero considero importante plasmar esta información aquí.

3. El tercer paso es definir los umbrales de color adentro del HSV. Esto es de lo más importante en el código, porque es la definición de **Rojo** que se va a buscar en la imagen.

<Code>
umbral_bajo1 = (0,100, 20)
umbral_alto1 = (10,255,255)

umbral_bajo2 = (175,100,20)
umbral_alto2 = (180,255,255)
</Code>

4. A continuación se crea una máscara la imagen, la cuál funciona como un filtro sobre la imagen y selecciona solo lo que se encuentra sobre el umbral de color que se creó en el paso 3. A la imagen se le aplica dicha máscara y se muestra en pantalla
<code>
mask1 = cv2.inRange(imagenHSV, umbral_bajo1, umbral_alto1)
mask2 = cv2.inRange(imagenHSV, umbral_bajo2, umbral_alto2)
mask3 = mask1+ mask2
maskedImg = cv2.bitwise_and(imagen, imagen, mask= mask3)
cv2.imshow('MaskedImage',  maskedImg)
</code>

5. El 5 paso es que realmente va a responder la pregunta *¿Cuántos objetos rojos hay?* La variable contornos es una lista de todos los contornos que se han encontrado; contornos de objetos, esto quiere decir que por cada contorno que existe hay un objeto de color rojo relacionado. Utilizando la funcion **findContours** se encuentran la lista de los objetos conseguidos por la máscara.
Y la cantidad de objetos se obtiene con la funcion **len** (abreviación de lenght) que indica el tamaño de la lista de contornos encontrados y se manda a imprimir por consola.

<Code>
contornos = cv2.findContours(mask3, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)[0]
print(len(contornos))
</Code>

El resultado es : **1282** objetos.

# Código
import cv2

#Paso 1 Leer la imagen
imagen      = cv2.imread('Tareas\TAREA_05\Rojo.jpg',1)

#Paso 2: A HSV
imagenHSV = cv2.cvtColor(imagen, cv2.COLOR_BGR2HSV)

#Para mayor detección de colores se usan 2 máscaras, 
#Si se usa solo 1 no se aprecian tanto los colores
umbral_bajo1 = (0,100, 20)
umbral_alto1 = (10,255,255)

umbral_bajo2 = (175,100,20)
umbral_alto2 = (180,255,255)

#Se crean las mascaras de la imagen con los umbrales de color
mask1 = cv2.inRange(imagenHSV, umbral_bajo1, umbral_alto1)
mask2 = cv2.inRange(imagenHSV, umbral_bajo2, umbral_alto2)
mask3 = mask1+ mask2
#Se aplica la máscara a la imagen original

maskedImg = cv2.bitwise_and(imagen, imagen, mask= mask3)
contornos = cv2.findContours(mask3, cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)[0]
print(len(contornos))
cv2.imshow('MaskedImage',  maskedImg)
cv2.imshow("HSV", imagenHSV)
cv2.imshow("Original", imagen)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Conclusiones
Son más objetos de los esperados, posiblemente porque el umbral de color definido es bastante amplio y detecta los pixeles de rojo.Si utiliara un umbral de color más pequeño habría menos detecciones. Por otro lado, el código es realmente sencillo, ya que se había trabajado algo muy similar durante el tiempo de la clase, lo único que no se había utilizado es la función de **len** la cual es la que realmente responde la pregunta que pide el problema.

# Referencias

1. Giuseppe,G. (2019). *Detección de objetos por colores en imágenes con Python y OpenCV*. Recuperado de
[Medium](https://medium.com/@gastonace1/detección-de-objetos-por-colores-en-imágenes-con-python-y-opencv-c8d9b6768ff)