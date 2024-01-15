#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include "utils/greet.hpp"
#include "search/find.hpp"

#include "Objects/Rectangle.h"



using namespace std;
using messaging::greet;
using search::find;


int main() {

    /*
    Rectangle first;
    Rectangle second;
    cout << &first << endl;  // These references will be different because they are different objects
    cout << &second << endl;

    Rectangle rectangle;
    rectangle.setWidth(10);
    rectangle.setHeight(20);
    cout << "Area: " << rectangle.getArea() << endl;
    rectangle.draw();
    */

    // With constructor
    Rectangle rectangle{10, 20};
    cout << "Area: " << rectangle.getArea() << endl;
    rectangle.draw();
    rectangle.setWidth(30);
    rectangle.setHeight(40);
    cout << rectangle.getWidth() << endl;
    cout << rectangle.getHeight() << endl;
    return 0;
}
