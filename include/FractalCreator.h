#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <string>
#include <memory>
#include <vector>

#include "Zoom.h"
#include "Bitmap.h"
#include "ZoomList.h"
#include "RGB.h"
#include "Mandelbrot.h"

using namespace std;

namespace cagdas
{
    class FractalCreator
    {
    
    private:
        int m_width;
        int m_height;
        unique_ptr<int[]> m_histogram;
        unique_ptr<int[]> m_fractal;
        Bitmap m_bitmap;
        ZoomList m_zoomList;
        int m_total{0};

        vector<int> m_ranges;
        vector<RGB> m_colors;
        vector<int> m_rangeTotals;

        bool m_bGotFirstRange{false};

    public:
        void run(string fileName);
        FractalCreator(int width, int height);
        ~FractalCreator();
        void addZoom(const Zoom& zoom);
        void addRange(double rangeEnd, const RGB& rgb);
        
    private:
        void calculateIteration();
        void calculateTotalIterations();
        void calculateRangeTotals();
        void drawFractal();
        int getRange(int iterations) const;
        void writeBitmap(string fileName);



    };

} // namespace cagdas

#endif
