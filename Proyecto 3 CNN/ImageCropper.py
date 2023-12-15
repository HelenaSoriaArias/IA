from PIL import Image
 
for i in range(211,459):
# Opens a image in RGB mode
    if(i == 72 or i == 0):
        print("x")
    else:
        img = Image.open("D:/Flores/HTS"+str(i)+".png")
        left = 200
        top = 200
        right = 1300
        bottom = 1300
        img1 = img.crop((left, top, right-400, bottom-700))
        img1.save("D:/Flores/HTSC"+str(i)+".png")
