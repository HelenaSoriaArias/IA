import cv2
#Se usa la liberia OPENCV

cap = cv2.VideoCapture(0,cv2.CAP_DSHOW)
#Se captura video en la cámara 0

cclassifier = cv2.CascadeClassifier('D:/Cubrebocas/classifier/cascade.xml')
#Se crea el clasificador usando el xml deseado
while True:
	ret,frame 		= cap.read()
	gray 			= cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
	faces 			= cclassifier.detectMultiScale(
		gray,
		scaleFactor 	= 5,
		minNeighbors 	= 200,
		minSize			= (70,70),
	)

	for (x,y,w,h) in faces:
		cv2.rectangle(frame, (x,y+10),(x+w,y+h),(0,0,255),1)
	#Rectangl: frame es la imagen base, 
		# x,y la posición de inicio,
		# x+w,y+h la posicion final
		# 0,0,255 el color rojo del cuadrado
		# 1 grosor de linea  	
		cv2.putText(frame, 'Cubrebocas', (x,y-15), 6, 0.5, (0,0,255),1,cv2.LINE_AA)
	#PutText: 
		# frame es la Imagen base,
		# 'Cubrebocas' el texto a mostrar
		# (x, y-10) coordenada de inicio del texto [y-10 significa arriba del cuadro de cubrebocas], 
		# 6 el el tipo de letra (hay 7 tipos de letra)
		# 0.5 es el tamaño de letra
		# (0,0,255) es el color de letra
		# 1 el grosor de linea de letra (Normal o Bold)
		# Line_AA indica la continuidad de puntos para hacer una letra. 
	cv2.imshow('frame',frame)
	#Mostrar
	if cv2.waitKey(1) == 27:
		break
	#Salir
cap.release()
cv2.destroyAllWindows()