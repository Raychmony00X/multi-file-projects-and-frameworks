#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
    : a(a), b(b), c(c), A(A), B(B), C(C) {
}

const char* Triangle::getName() const { return "Треугольник"; }