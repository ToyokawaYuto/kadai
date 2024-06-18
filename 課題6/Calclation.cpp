// Calclation.cpp

#include "Calclation.h"
#include <iostream>

Calclation::Calclation() {
    a = 0.0f;
    b = 0.0f;
}

void Calclation::SetA(float value) {
    a = value;
}

void Calclation::SetB(float value) {
    b = value;
}

void Calclation::Disp() {
    std::cout << a << " + " << b << " = " << a + b << std::endl;
    std::cout << a << " - " << b << " = " << a - b << std::endl;
}
