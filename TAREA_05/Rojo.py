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
print("Objetos ")
print(len(contornos))
cv2.imshow('MaskedImage',  maskedImg)
cv2.imshow("HSV", imagenHSV)
cv2.imshow("Original", imagen)
cv2.waitKey(0)
cv2.destroyAllWindows()





