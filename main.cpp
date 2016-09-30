#include <cstdlib>
#include "triangle.hpp"
#include "rectangle.hpp"
#include "Foursquare.hpp"
int main(int argc, char** argv) {
    Figure *ptr = new Triangle(std::cin);
    ptr->Print();
    std::cout << ptr->Square() << std::endl;
    delete ptr;
    return 0;
}
#include <stdio.h>
