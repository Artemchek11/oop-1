#include <iostream>
#include "rectangle.hpp"


int main(){
    Rectangle rectangle1(3, 4);
    Rectangle rectangle2(6, 8);
    Rectangle rectangle3(5, 5);
    std::cout << "Square: " << rectangle1.square() << std::endl;
    std::cout << "Perimeter: " << rectangle1.perimeter() << std::endl;
    std::cout << std::boolalpha << "Chech quadrant: " << rectangle1.chech_quadrant() << std::endl;
    std::cout << "Diagonal: " << rectangle1.diagonal() << std::endl;
    std::cout << "Compare: " << std::boolalpha << (rectangle1 < rectangle2) << std::endl;
    std::cout << "Describe: " << rectangle1.describe_circle() << std::endl;
    std::cout << "Enter: " << rectangle3.enter_circle() << std::endl;
}