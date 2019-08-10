import pytesseract
from PIL import Image
img=Image.open('picmult.png')
text=pytesseract .image_to_string(img)
print('The expression written in image is :  ')
print(text)
c = eval(text)
print('The solution of the expression is: ')
print(c)
