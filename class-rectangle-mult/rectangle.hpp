#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>
#include <cmath>

class Rectangle {
public:
    Rectangle() = default;
    Rectangle(double newA, double newB);

    bool operator > (const Rectangle& rec) const;
    bool operator < (const Rectangle& rec) const;
    bool operator == (const Rectangle& rec) const;

    double square() const;
    double perimeter() const;
    double diagonal() const;
    bool chech_quadrant() const;
    double enter_circle() const; // следует использовать, только если квадрат
    double describe_circle() const;

private:
    double a{0.0};
    double b{0.0};
};


#endif