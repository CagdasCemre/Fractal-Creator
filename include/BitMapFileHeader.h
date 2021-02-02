#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include <cstdint>
using namespace std;

#pragma pack(2)

namespace cagdas
{

    struct BitMapFileHeader
    {
        char header[2]{'B', 'M'};
        int32_t fileSize;
        int32_t reserved{0};
        int32_t dataOffset;
    };

} // namespace cagdas

#endif