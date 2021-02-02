#ifndef RGB_H_
#define RGB_H_

namespace cagdas
{
    
    struct RGB
    {
        double r;
        double g;
        double b;

    public:
        RGB(double r, double g, double b);
    };

    RGB operator-(const RGB& first, const RGB& second);
} // namespace cagdas


#endif