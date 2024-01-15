
#include <iostream>
#include "Rectangle.h"
using namespace std;

// Constructor
//Rectangle::Rectangle() {
//
//}

// Constructor
Rectangle::Rectangle(int width, int height) {
    cout << "Constructing a rectangle" << endl;
    setWidth(width);
    setHeight(height);
}

void Rectangle::draw() {
  cout << "Drawing rectangle" << endl;
  cout << "Dimensions: " << getWidth() << " x " << getHeight() << endl;
}

int Rectangle::getArea() {
    return getWidth() * height;
}


// Getters and setters implementation
int Rectangle::getWidth() {
    return width;
}

void Rectangle::setWidth(int width) {
    if (width < 0) {
        throw invalid_argument("Width cannot be negative");
    } else{
        this->width = width;
    }

}

int Rectangle::getHeight() {
    return height;
}

void Rectangle::setHeight(int height) {
    if (height < 0) {
        throw invalid_argument("Height cannot be negative");
    } else{
        this->height = height;
    }
}

