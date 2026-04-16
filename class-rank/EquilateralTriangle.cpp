#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int side)
    : Triangle(side, side, side, 60, 60, 60) {
}

const char* EquilateralTriangle::getName() const { return "Равносторонний треугольник"; }