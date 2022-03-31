#pragma once
#include <iostream>
#include "point.h"
#include "Vector2D.h"

class Vector2D
{
public:
    Vector2D() :
        initPoint{ 0, 0 },
        endPoint{ 0, 0 }
        {}
        
        Vector2D(const Point& initPoint_, const Point& endPoint_) :
            initPoint(initPoint_),
            endPoint(endPoint_)
        {}

        const Point& initpoint() const
        {
            return initPoint;
        }

        const Point& endpoint() const
        {
            return endPoint;
        }

        Vector2D sumVec2D(Vector2D vec1) const
        {
            const Point pi{initPoint.x, endPoint.y}, pf{initPoint.x + vec1.initpoint().x, endPoint.y + vec1.endpoint().y};
            return { pi, pf };
        }

        Vector2D resVec2D(Vector2D vec1) const
        {
            const Point pi{initPoint.x, endPoint.y}, pf{initPoint.x - vec1.initpoint().x, endPoint.y - vec1.endpoint().y};
            return { pi, pf };
        }

        Vector2D mulEscVec2D(float Escalar) const
        {
            const Point pi{initPoint.x, endPoint.y}, pf{initPoint.x * Escalar, endPoint.y * Escalar};
            return { pi, pf };
        }

        float prodPuntoVec2D(Vector2D vec1) const
        {
            return initPoint.x * vec1.initpoint().x + endPoint.x * vec1.endpoint().x;
        }

        Vector2D prodCruzVec2D(Vector2D vec1) const
        {
            const Point pi{0, 0}, pf{0, 0}; //Asumo que no es necesario para manejo en 2D
            return { pi, pf };
        }

        Vector2D invert() const
        {
            return { endPoint, initPoint };
        }

        // factor between 0 and 1 will interpolate between source and target points.
        Point interpolate(float factor) const
        {
            const Point delta = endPoint - initPoint;
            const Point localInterpolate = delta * factor;
            return initPoint + localInterpolate;
        }
    private:
        Point initPoint, endPoint;
};