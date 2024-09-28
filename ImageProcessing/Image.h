

#ifndef IMAGE_H
#define IMAGE_H

class Image
{
public:
    Image();
    Image(int numRows, int numColsm, int grayLevels);
    ~Image();
    Image(const Image &orig);
    //virtual ~Image();
    void setImageInfo(int numRows, int numCols, int maxVal);
    void getImageInfo(int &numRows, int &numCols, int &maxVal);
    int getPixelVal(int row, int col);
    void setPixelVal(int row, int col, int value);
    bool inBounds(int row, int col); //checks to see if pixel is in the bounds
    Image threshold(int threshold);  //binarize a grayscale image
    Image otsuBinarize();            //Binarize grayscale image based on Otsu's thresholding method

    Image logicNOT(); //Logic NOT operation on an image

    int rows;       //number of rows
    int cols;       //number of columns
    int gray;       //number of gray levels
    int **pixelVal; //2D array containing pixel values
};

#endif /* IMAGE_H */
