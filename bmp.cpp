#include <iostream>
#include <fstream>
#include "bitmap/bitmap_image.hpp"

using namespace std;

int main(int argc, char* argv[])
{
    
    string fileName =  argv[2];    
    bitmap_image image(fileName);
    if(!image)
    {
        cout << "error opening input file";
        return 1;
    }

    unsigned char red, green, blue;
    const unsigned int height = image.height(), width = image.width();
    for(int h = 0; h < height; h++)
    {
        for(int w = 0; w < width; w++)
        {
           image.get_pixel(w, h, red, green, blue);
           const char *outputChar = ((red <= 200 || blue <= 200 || green <= 200)?((red <= 100 || blue <= 100 || green <= 100)?"O":"o"):".");
           //const char *outputChar = (red <= 200 || blue <= 200 || green <= 200)?"O":"o";
           cout << *outputChar;
        }        
        cout << endl;
    }
}
