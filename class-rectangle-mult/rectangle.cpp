#include "rectangle.hpp"



Rectangle::Rectangle(double newA, double newB): a(newA), b(newB) {}

bool Rectangle::operator > (const Rectangle& rec) const {
    return this->square() > rec.square();
}

bool Rectangle::operator < (const Rectangle& rec) const {
    return this->square() < rec.square();
}

bool Rectangle::operator == (const Rectangle& rec) const {
    return this->square() == rec.square();
}

double Rectangle::square() const{
    return a * b;
}

double Rectangle::perimeter() const{
    return 2 * (a + b);
}

double Rectangle::diagonal() const{
    return std::pow((a * a + b * b), 0.5);
}

bool Rectangle::chech_quadrant() const{
    return (a == b);
}

double Rectangle::enter_circle() const{
    return (a/2);
} // следует использовать, только если квадрат

double Rectangle::describe_circle() const{
    return std::pow(((a * a + b * b)/4), 0.5);
}