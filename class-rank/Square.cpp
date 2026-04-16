#include "Square.h"

Square::Square(int side)
    : Quadrilateral(side, side, side, side, 90, 90, 90, 90) {
}

const char* Square::getName() const { return "Квадрат"; }