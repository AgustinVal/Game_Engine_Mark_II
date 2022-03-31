#pragma once
#include <iostream>
#include "point.h"
#include "Vector2D.h"


class BoundingBox  //Me no entender very mucho :c --> Cuadro delimitador
{
public:
    BoundingBox():
        bPointInit { 0, 0 },
        bPointEnd { 0, 0 }
        {}

        const Point& bpointInit() const;
        const Point& bpointEnd() const;

        BoundingBox(const Point& bpointinit_, const Point& bpointend_);
        
    private:
        Point bPointInit, bPointEnd;
};