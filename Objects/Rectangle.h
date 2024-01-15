
#ifndef CPLUSPLUS_RECTANGLE_H
#define CPLUSPLUS_RECTANGLE_H

class Rectangle {
public:
    // Default constructor
    Rectangle() = default;
    // Constructor
    Rectangle(int width, int height);
    void draw();
    int getArea();
    // Getters and setters
    int getWidth();
    void setWidth(int width);
    int getHeight();
    void setHeight(int height);
private:
    int width;
    int height;
};



#endif //CPLUSPLUS_RECTANGLE_H
