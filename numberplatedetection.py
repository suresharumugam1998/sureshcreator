import numpy as np
import pandas as pd
from PIL import Image
import pytesseract
import urllib
import cv2
import json
def ExtractNumbers(List):
    for index,R in List.iterrows():
       Response = urllib.request.urlopen(R[0])
        Img = np.array(Image.open(Response))
         Images.append(Img)
        xt = R[1][0]['x']*Img.shape[1]
        yt = R[1][0]['y']*Img.shape[0]
        xb = R[1][1]['x']*Img.shape[1]
        yb = R[1][1]['y']*Img.shape[0]
         fullImage = Image.fromarray(Img)
        plateImage = fullImage.crop((xt,yt,xb,yb))
        Plates.append(np.array(plateImage))
        plateImage.save('image.png')
        img=cv2.imread('image.png')
        img=cv2.resize(img,(int(img.shape[1]*4),int(img.shape[0]*4)))
        Num=pytesseract.image_to_string(img)
        print(Num)
        Numbers.append(Num)
Images =[] 
Plates =[]
Numbers=[] 
if __name__== "__main__":
  List = pd.read_json('Indian_Number_plates.json', lines=True)
    pd.set_option('display.max_colwidth', -1)
     del List['extras']
    List['points'] = List.apply(lambda R: R['annotation'][0]['points'], axis=1)
    del List['annotation']
    ExtractNumbers(List)
