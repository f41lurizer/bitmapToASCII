#include <iostream>
#include <fstream>
#include "qdbmp.h"
using namespace std;

int main(int argc, char* file[])
{
    BMP* bmp = BMP_ReadFile("fgt");
    if(BMP_GetError() != BMP_OK)
        cout << "an eror has occured with opening the image";
    
}
