#include <iostream>
#include "Vector2D.h"

int main() {
    Vector2D v1(4.0, 0.0);
    std::cout << v1.GetDir() * 180.0/M_PI << std::endl;
    v1.Rotate(M_PI/2.0);
    std::cout << v1.GetDir() * 180.0/M_PI;
    return 0;
}