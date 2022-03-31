#pragma once
#include <iostream>
#include "point.h"
#include "Vector2D.h"
#include "BoundingBox.h"
#include "Actor.h"

class Actor
{
public:
    Actor() :
        aPos{ 0, 0 },
        aVel{ aPos, aPos },
        aHigh{ 0 },
        aWeight{ 0 }
        {}

        Actor(const Point& pos_, const Vector2D& vel_, const float high_, const float weight_) :
            aPos(pos_),
            aVel(vel_),
            aHigh(high_),
            aWeight(weight_)
        {}

        const Point& pos() const
        {
            return aPos;
        }

        const Vector2D& vel() const
        {
            return aVel;
        }

        const float high() const
        {
            return aHigh;
        }

        const float weight() const
        {
            return aWeight; 
        }

        void update(float delta_tiempo) const {
            //aPos += delta_tiempo * aVel;
            aPos += aVel.mulEscVec2D(delta_tiempo).endpoint()
        }

    private:
        Point aPos;
        Vector2D aVel;
        float aHigh, aWeight;
};