
#include "MyCppLibrary.h"

std::vector<float> MyCppClass::ProcessVector(const std::vector<float>& input) {
    std::vector<float> output;
    for (float value : input) {
        output.push_back(value * 2); // Example processing: doubling each element
    }
    return output;
}
