#pragma once
#include <iostream>
#include "point.h"
#include "Vector2D.h"
#include "BoundingBox.h"

class Actor
{
public:
    Actor() :
        aPos{ 0, 0 },
        aVel{ aPos, aPos },
        aHigh{ 0 },
        aWeight{ 0 }
        {}

        Actor(const Point& pos_, const Vector2D& vel_, const float high_, const float weight_);

        const Point& pos() const;

        const Vector2D& vel() const;

        const float high() const;

        const float weight() const;

        void update(float delta_tiempo) const {;

    private:
        Point aPos;
        Vector2D aVel;
        float aHigh, aWeight;
};