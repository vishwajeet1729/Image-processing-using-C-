# Image-Processing-cpp
- This project presents a non exhaustive list of image processing algorithms. The algorithms are implemented in C and C++ and all images used are in pgm format.

## Prerequisites

- To follow this tutorial, you need to install the g++ compiler on your PC.
- All examples here are based on a Linux environment but can be easily adapted for Windows based environments.

Compile the program:

```
sudo g++ main.cpp Image.cpp -o app

```
## How to use the program
- The program presents 26 image processing algorithms. Logic operations, mathematical operations, convolutions and filters, and calculating an image histogram, image luminance, and contrast enhancement algorithms.
- The program can take 3, 4, or 5 arguments, including the name of the binary (`arg 0`). 
- The sample images used are in the `images` folder and are all `.pgm` format.
- The image resulting from each operation is generated in the `output.pgm`
- Below is a list of some of the operations provided by the program and how you can test them on images. 
### Logic Operations (6)
- Image binarization based on Otsu's thresholding algorithm: `./app otsuBinarize images/lena.pgm`<br/>

![alt-lena](ImageProcessing/fig/lena.png) ![alt-lena-otsu](ImageProcessing/fig/otsubin.png)

- Logic NOT: `./app not images/lena.pgm`<br/>

![alt-lena](ImageProcessing/fig/lena.png) ![alt-not-lena](ImageProcessing/fig/notlena.png)

- Logic XOR: `./app images/lena.pgm xor images/aya.pgm`<br/>

![alt-lena](ImageProcessing/fig/lena.png) ![alt-aya](ImageProcessing/fig/aya.png) ![alt-lena-xor-aya](ImageProcessing/fig/lenaXORaya.png)



### Convolution and Filters (9)
- Gauss Filter: `./app gaussFilter images/aya.pgm`<br/>

![alt-lena](ImageProcessing/fig/aya.png) ![alt-not-lena](ImageProcessing/fig/ayaGauss.png)


- Laplacien Convolution: `./app laplacienConvo images/lena.pgm`<br/>

![alt-lena](ImageProcessing/fig/lena.png) ![alt-not-lena](ImageProcessing/fig/laplacienConvoLena.png)


## Some useful linux commands for images
- Resize an image: `convert img.png -resize 300x300\> output.png` (Target size in this example is 300x300).
- Identify image resolution (width x height): `identify -format "%wx%h" image.png` (Install imagemagick linux package).
# Image-processing-using-C-
