#pragma once

#include "../MyCppLibrary/MyCppLibrary.h"
#include <vector>
#include <vcclr.h>


using namespace System;
using namespace System::Collections::Generic;

namespace MyCppCliWrapper {

    public ref class WrapperClass {
    private:
        MyCppClass* cppClass;

    public:
        WrapperClass() {
            cppClass = new MyCppClass();
        }

        ~WrapperClass() {
            this->!WrapperClass();
        }

        !WrapperClass() {
            delete cppClass;
        }

        List<float>^ ProcessVector(List<float>^ input) {
            std::vector<float> inputVector;
            for each (float value in input) {
                inputVector.push_back(value);
            }

            std::vector<float> outputVector = cppClass->ProcessVector(inputVector);

            List<float>^ outputList = gcnew List<float>();
            for (float value : outputVector) {
                outputList->Add(value);
            }

            return outputList;
        }
    };

}
