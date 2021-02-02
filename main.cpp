#include <iostream>


#include "FractalCreator.h"
#include "RGB.h"
#include "Zoom.h"

using namespace std;
using namespace cagdas;

int main()
{


    int const WIDTH = 800;
    int const HEIGHT = 600;
    
    FractalCreator fractalCreator(WIDTH, HEIGHT);

    fractalCreator.addRange(0.0, RGB(0, 0, 0));
    fractalCreator.addRange(0.3, RGB(255, 0, 0));
    fractalCreator.addRange(0.5, RGB(128, 255, 0));
    fractalCreator.addRange(1.0, RGB(128, 54, 200));

    fractalCreator.addZoom(Zoom(295, 202, 0.1));
    fractalCreator.addZoom(Zoom(312, 304, 0.1));

    fractalCreator.run("fractal.bmp");

    cout << "Finished" << endl;
    return 0;
}