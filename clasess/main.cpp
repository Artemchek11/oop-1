#include <iostream>
#include <string>
#include <cmath>


class Rectangle{

public:
    Rectangle() = default;

    Rectangle(double newA, double newB): a(newA), b(newB) {}

    bool operator > (const Rectangle& rec) const {
        return this->square() > rec.square();
    }

    bool operator < (const Rectangle& rec) const {
        return this->square() < rec.square();
    }

    bool operator == (const Rectangle& rec) const {
        return this->square() == rec.square();
    }

    double square() const{
        return a * b;
    }

    double perimeter() const{
        return 2 * (a + b);
    }

    double diagonal() const{
        return std::pow((a * a + b * b), 0.5);
    }

    bool chech_quadrant() const{
        return (a == b);
    }

    double enter_circle() const{
        return (a/2);
    } // следует использовать, только если квадрат

    double describe_circle() const{
        return std::pow(((a * a + b * b)/4), 0.5);
    }

private:
    double a{0.0};
    double b{0.0};
};


int main(){
    Rectangle rectangle1(3, 4);
    Rectangle rectangle2(6, 8);
    Rectangle rectangle3(5, 5);
    std::cout << "Square: " << rectangle1.square() << std::endl;
    std::cout << "Perimeter: " << rectangle1.perimeter() << std::endl;
    std::cout << std::boolalpha << "Chech quadrant: " << rectangle1.chech_quadrant() << std::endl;
    std::cout << "Diagonal: " << rectangle1.diagonal() << std::endl;
    std::cout << std::boolalpha << (rectangle1 == rectangle2) << std::endl;
    std::cout << "Describe: " << rectangle1.describe_circle() << std::endl;
    std::cout << "Enter: " << rectangle3.enter_circle() << std::endl;
}