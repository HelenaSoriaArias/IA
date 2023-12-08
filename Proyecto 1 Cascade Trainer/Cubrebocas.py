import cv2
cap = cv2.VideoCapture(0,cv2.CAP_DSHOW)
cclassifier = cv2.CascadeClassifier('D:/Cubrebocas/classifier/cascade.xml')
while True:
	
	ret,frame 		= cap.read()
	gray 			= cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
	faces 			= cclassifier.detectMultiScale(
		gray,
		scaleFactor 	= 8,
		minNeighbors 	= 100,
		minSize			= (70,70),
	)

	for (x,y,w,h) in faces:
		cv2.rectangle(frame, (x,y),(x+w,y+h),(0,0,255),1)
		cv2.putText(frame,  'Persona con cubrebocas', (x,y-10),  6, 0.5, (0,0,255),1,cv2.LINE_AA)

	cv2.imshow('frame',frame)
	
	if cv2.waitKey(1) == 27:
		break
cap.release()
cv2.destroyAllWindows()