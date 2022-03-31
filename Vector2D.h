#pragma once
#include <iostream>
#include "point.h"


class Vector2D
{
public:
    Vector2D() :
        initPoint{ 0, 0 },
        endPoint{ 0, 0 }
        {}
        
        Vector2D(const Point& initPoint_, const Point& endPoint_);

        const Point& initpoint() const;

        const Point& endpoint() const;

        Vector2D sumVec2D(Vector2D vec1) const;

        Vector2D resVec2D(Vector2D vec1) const;

        Vector2D mulEscVec2D(float Escalar) const;

        float prodPuntoVec2D(Vector2D vec1) const;

        Vector2D prodCruzVec2D(Vector2D vec1) const;

        Vector2D invert() const;

        // factor between 0 and 1 will interpolate between source and target points.
        Point interpolate(float factor) const;
        
    private:
        Point initPoint, endPoint;
};










