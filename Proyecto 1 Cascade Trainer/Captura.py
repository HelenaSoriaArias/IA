import numpy    as np
import cv2      as cv
import math

cap = cv.VideoCapture(0)
i   = 0
while True:
    ret, frame1 = cap.read()
    frame1 = cv.rectangle(frame1,(100,100), (400,400),(255,0,0),3)
    frame2 = frame1[100:400, 100:400]
    cv.imshow('Frame1', frame1)
    cv.imshow('Frame2', frame2)

    k = cv.waitKey(1)
    if k == ord('a'):
        
        i = i + 1
        scale_percent = 12 # percent of original size
        width = int(frame2.shape[1] * scale_percent / 100)
        height = int(frame2.shape[0] * scale_percent / 100)
        dim = (width, height)
        resized = cv.resize(frame2, dim, interpolation = cv.INTER_AREA)
        cv.imwrite("D:/Cubrebocas/Fotos"+str(i) +".jpg", resized)
        print("Foto guardada")
    if k == 27:
        break
    
cap.release()
cv.destroyAllWindows()
