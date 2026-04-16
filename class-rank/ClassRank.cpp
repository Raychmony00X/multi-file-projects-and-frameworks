#include <iostream>
#include <Windows.h>

#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Rectangle.h"
#include "Square.h"
#include "Parallelogram.h"
#include "Rhombus.h"

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle t(10, 20, 30, 50, 60, 70);
    RightTriangle rt(10, 20, 30, 50, 60);
    IsoscelesTriangle it(10, 20, 50, 60);
    EquilateralTriangle et(30);
    Quadrilateral q(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle r(10, 20);
    Square s(20);
    Parallelogram p(20, 30, 30, 40);
    Rhombus rh(30, 30, 40);

    std::cout << t.getName() << ":" << std::endl;
    std::cout << "Стороны: a=" << t.getA() << " b=" << t.getB() << " c=" << t.getC() << std::endl;
    std::cout << "Углы: A=" << t.getAngleA() << " B=" << t.getAngleB() << " C=" << t.getAngleC() << std::endl << std::endl;

    std::cout << rt.getName() << ":" << std::endl;
    std::cout << "Стороны: a=" << rt.getA() << " b=" << rt.getB() << " c=" << rt.getC() << std::endl;
    std::cout << "Углы: A=" << rt.getAngleA() << " B=" << rt.getAngleB() << " C=" << rt.getAngleC() << std::endl << std::endl;

    std::cout << it.getName() << ":" << std::endl;
    std::cout << "Стороны: a=" << it.getA() << " b=" << it.getB() << " c=" << it.getC() << std::endl;
    std::cout << "Углы: A=" << it.getAngleA() << " B=" << it.getAngleB() << " C=" << it.getAngleC() << std::endl << std::endl;

    std::cout << et.getName() << ":" << std::endl;
    std::cout << "Стороны: a=" << et.getA() << " b=" << et.getB() << " c=" << et.getC() << std::endl;
    std::cout << "Углы: A=" << et.getAngleA() << " B=" << et.getAngleB() << " C=" << et.getAngleC() << std::endl << std::endl;

    std::cout << q.getName() << ":" << std::endl;
    std::cout << "Стороны: a=" << q.getA() << " b=" << q.getB() << " c=" << q.getC() << " d=" << q.getD() << std::endl;
    std::cout << "Углы: A=" << q.getAngleA() << " B=" << q.getAngleB() << " C=" << q.getAngleC() << " D=" << q.getAngleD() << std::endl << std::endl;

    std::cout << r.getName() << ":" << std::endl;
    std::cout << "Стороны: a=" << r.getA() << " b=" << r.getB() << " c=" << r.getC() << " d=" << r.getD() << std::endl;
    std::cout << "Углы: A=" << r.getAngleA() << " B=" << r.getAngleB() << " C=" << r.getAngleC() << " D=" << r.getAngleD() << std::endl << std::endl;

    std::cout << s.getName() << ":" << std::endl;
    std::cout << "Стороны: a=" << s.getA() << " b=" << s.getB() << " c=" << s.getC() << " d=" << s.getD() << std::endl;
    std::cout << "Углы: A=" << s.getAngleA() << " B=" << s.getAngleB() << " C=" << s.getAngleC() << " D=" << s.getAngleD() << std::endl << std::endl;

    std::cout << p.getName() << ":" << std::endl;
    std::cout << "Стороны: a=" << p.getA() << " b=" << p.getB() << " c=" << p.getC() << " d=" << p.getD() << std::endl;
    std::cout << "Углы: A=" << p.getAngleA() << " B=" << p.getAngleB() << " C=" << p.getAngleC() << " D=" << p.getAngleD() << std::endl << std::endl;

    std::cout << rh.getName() << ":" << std::endl;
    std::cout << "Стороны: a=" << rh.getA() << " b=" << rh.getB() << " c=" << rh.getC() << " d=" << rh.getD() << std::endl;
    std::cout << "Углы: A=" << rh.getAngleA() << " B=" << rh.getAngleB() << " C=" << rh.getAngleC() << " D=" << rh.getAngleD() << std::endl << std::endl;

    return 0;
}