#pragma once
#include <iostream>
#include "point.h"
#include "Vector2D.h"
#include "BoundingBox.h"


class BoundingBox  //Me no entender very mucho :c --> Cuadro delimitador
{
public:
    BoundingBox():
        bPointInit { 0, 0 },
        bPointEnd { 0, 0 }
        {}

        const Point& bpointInit() const
        {
            return bPointInit;
        }

        const Point& bpointEnd() const
        {
            return bPointEnd;
        }

        BoundingBox(const Point& bpointinit_, const Point& bpointend_):
            bPointInit(bpointinit_),
            bPointEnd(bpointend_)
            {}
    private:
        Point bPointInit, bPointEnd;
};