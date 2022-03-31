#include <iostream>

struct Point
{
    float x, y;
};

std::ostream &operator<<(std::ostream &os, const Point &point)
{
    return os << "( " << point.x
              << ", " << point.y
              << ")";
}

Point operator+(const Point &lhs, const Point &rhs)
{
    return {lhs.x + rhs.x, lhs.y + rhs.y};
}

Point operator-(const Point &lhs, const Point &rhs)
{
    return {lhs.x - rhs.x, lhs.y - rhs.y};
}

Point operator*(const Point &lhs, float rhs)
{
    return {lhs.x * rhs, lhs.y * rhs};
}

Point operator*(float lhs, const Point &rhs)
{
    return {lhs * rhs.x, lhs * rhs.y};
}