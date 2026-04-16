#include "Rhombus.h"

Rhombus::Rhombus(int side, int A, int B)
    : Quadrilateral(side, side, side, side, A, B, A, B) {
}

const char* Rhombus::getName() const { return "Ромб"; }