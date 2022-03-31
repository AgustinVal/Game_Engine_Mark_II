#pragma once
#include <iostream>
#include "point.h"
#include "Vector2D.h"
#include "BoundingBox.h"
#include "Actor.h"



std::ostream& operator<<(std::ostream& os, const Vector2D& vector2D)
{
    return os<< "[" << vector2D.initpoint() << " -> " << vector2D.endpoint() << " ]";
}

int main()
{
    const Point p1{1, 1}, p2{2, 0};
    const Point p3(0.0f, 2.0f);

    std::cout << "p1 = " << p1 << std::endl;
    std::cout << "p2 = " << p2 << std::endl;
    std::cout << "p3 = " << p3 << std::endl;

    const Vector2D vector2D_12(p1, p2);

    std::cout << "p1->p2 = " << vector2D_12 << std::endl;
}