from PIL import Image
 
for i in range(6):
# Opens a image in RGB mode
    img = Image.open("D:/Flores/H"+str(i)+".png")
    left = 450
    top = 170
    right = 1300
    bottom = 1300
    img1 = img.crop((left, top, right-200, bottom-730))
    img1.save("D:/Flores/HC"+str(i)+".png")
