#include<iostream>
using namespace std;
// Define a class
class Rectangle // Rectangle is a class
{
    private: // Attributes and methods of the class are private
    int length; // length is an attribute of class Rectangle
    int width;  // width is an attribute of class Rectangle

    public: // Attributes and methods of the class are public means accessible from outside the class
    // Constructor to initialize length and width
    //We can have multiple constructors with different parameters, this is called constructor overloading
    Rectangle() // Constructor is a special member function that is called when an object of the class is created and they dont have a return type
    {
        length = 0; // Initialize length to 0
        width = 0;  // Initialize width to 0
    }
    Rectangle (int l, int w) // Constructor with parameters to initialize length and width
    {
        setLength(l); // Set length using setter
        setWidth(w);  // Set width using setter
    }
    Rectangle (Rectangle &r) // Copy constructor to initialize from another Rectangle object
    {
        length = r.length; // Copy length from another Rectangle
        width = r.width;   // Copy width from another Rectangle
    }



    void setLength(int l) // Set means this function sets the value of length and can be called from outside the class it also said as mutator
    {
        if (l > 0) {
            length = l; // sets the length of the rectangle
        } else {
            cout << "Length must be positive." << endl;
        }
    }
    void setWidth(int w) // Set means this function sets the value of width and can be called from outside the class it also said as mutator
    {
        if (w > 0) {
            width = w; // sets the width of the rectangle
        } else {
            cout << "Width must be positive." << endl;
        }
    }
    int getLength()    // Get means this function gets the value of length and can be called from outside the class it also said as accessor
    {
        return length; // returns the length of the rectangle
    }
    int getWidth()  // Get means this function gets the value of width and can be called from outside the class it also said as accessor
    {
        return width; // returns the width of the rectangle
    }
    int area() // area is a method of class Rectangle
    {
        return length * width; // returns the area of the rectangle
    }
    int perimeter() // perimeter is a method of class Rectangle
    {
        return 2 * (length + width); // returns the perimeter of the rectangle
    }

};

int main(){
    Rectangle r1; // Default constructor
    Rectangle r2(5, 10); // Constructor with parameters
    Rectangle r3(r2); // Copy constructor

    cout << "Rectangle Class Demonstration" << endl;
    cout << "Enter length and width of rectangle 1: ";
    int l, w;
    cin >> l >> w; // Input for rectangle 1
    r1.setLength(l); // Set length for rectangle 1
    r1.setWidth(w); // Set width for rectangle 1
    cout << "Area of rectangle 1: " << r1.area() << endl; // Output area of rectangle 1
    cout << "Perimeter of rectangle 1: " << r1.perimeter() << endl; // Output perimeter of rectangle 1

    cout << "Area of rectangle 2: " << r2.area() << endl; // Output area of rectangle 2
    cout << "Perimeter of rectangle 2: " << r2.perimeter() << endl; // Output perimeter of rectangle 2

    cout << "Area of rectangle 3: " << r3.area() << endl; // Output area of rectangle 3
    cout << "Perimeter of rectangle 3: " << r3.perimeter() << endl; // Output perimeter of rectangle 3

    // Displaying lengths and widths of the rectangles
    cout << "Lengths and widths of rectangles:" << endl;
    cout << "Rectangle 1 - Length: " << r1.getLength() << ", Width: " << r1.getWidth() << endl;
    cout << "Rectangle 2 - Length: " << r2.getLength() << ", Width: " << r2.getWidth() << endl;
    cout << "Rectangle 3 (copy of Rectangle 2) - Length: " << r3.getLength() << ", Width: " << r3.getWidth() << endl;

    return 0;
}