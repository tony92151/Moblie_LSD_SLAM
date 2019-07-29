# from webcam import Webcam
import cv2
from datetime import datetime
  
cap = cv2.VideoCapture(1)


picDir = "../../../../Downloads/frame/"
storeDir = "../../../../Downloads/frame/"
 
count = 1 

delay = 0

while True:
    ret, frame = cap.read()
    # delay+=1
    
    # get image from webcam
    image = frame
 
    # display image
    cv2.imshow('grid', image)
    cv2.waitKey(50)
 
    # save image to file, if pattern found
    ret, corners = cv2.findChessboardCorners(cv2.cvtColor(image,cv2.COLOR_BGR2GRAY), (7,6), None)
 
    if (ret == True):
        filename = str("{:04}".format(count))+".jpg"
        print ("Save pic ")
        cv2.imwrite(storeDir + filename, image)
        count+=1
    if (count>=50):
        break

    
print ("Saved")

ret, matrix, dist, rvecs, tvecs = cv2.calibrateCamera(corners, chessCorners, chessboardImage.shape[::-1][1:3], None, None)