#include<iostream>
#include<cmath>
using namespace std;

// Define a class
class Rectangle
{
    private:
    int length;
    int width;

    public:
    Rectangle(); // Default constructor initializes length and width to 1
    // Parameterized constructor initializes length and width with user input
    Rectangle(int l, int w);// Constructor with parameters to initialize length and width
    Rectangle(Rectangle &r);// Copy constructor to initialize from another Rectangle object
    void setLength(int l);// Set means this function sets the value of length and can be called from outside the class it also said as mutator
    void setWidth(int w);// Set means this function sets the value of width and can be called from outside the class it also said as mutator
    int getLength();// Get means this function gets the value of length and can be called from outside the class it also said as accessor
    int getWidth();// Get means this function gets the value of width and can be called from outside the class it also said as accessor
    int area();// area is a method of class Rectangle
    int perimeter();// perimeter is a method of class Rectangle
    int diagonal();// diagonal is a method of class Rectangle
    bool isSquare();// Method to check if the rectangle is a square
};

int main(){
    int l, w;
    cout << "Enter length of rectangle: ";
    cin >> l; // take length input from user
    cout << "Enter width of rectangle: ";
    cin >> w; // take width input from user

    Rectangle r(l, w); // Create rectangle object with user input and it calls parameterized constructor

    cout << "Area of rectangle: " << r.area() << endl;
    cout << "Perimeter of rectangle: " << r.perimeter() << endl;
    cout << "Diagonal of rectangle: " << r.diagonal() << endl;

    if (r.isSquare()) {
        cout << "The rectangle is a square." << endl;
    } else {
        cout << "The rectangle is not a square." << endl;
    }
    
    return 0;
}

Rectangle::Rectangle() // Default constructor initializes length and width to 1
{
    length = 1;
    width = 1;
}
Rectangle::Rectangle(int l, int w)// Constructor with parameters to initialize length and width
{
    setLength(l);
    setWidth(w);
}
Rectangle::Rectangle(Rectangle &r)// Copy constructor to initialize from another Rectangle object
{
    length = r.length;
    width = r.width;
}
void Rectangle::setLength(int l)// Set means this function sets the value of length and can be called from outside the class it also said as mutator
{
    if (l > 0) {
        length = l;
    } else {
        cout << "Length must be positive." << endl;
    }
}
void Rectangle::setWidth(int w) // Set means this function sets the value of width and can be called from outside the class it also said as mutator
{
    if (w > 0) {
        width = w;
    } else {
        cout << "Width must be positive." << endl;
    }
}
int Rectangle::getLength()// Get means this function gets the value of length and can be called from outside the class it also said as accessor
{
    return length;
}
int Rectangle::getWidth()// Get means this function gets the value of width and can be called from outside the class it also said as accessor
{
    return width;
}
int Rectangle::area()// area is a method of class Rectangle
{
    return length * width;
}
int Rectangle::perimeter() // perimeter is a method of class Rectangle
{
    return 2 * (length + width);
}
int Rectangle::diagonal()// diagonal is a method of class Rectangle
{
    return sqrt(length * length + width * width);
}
bool Rectangle::isSquare()// Method to check if the rectangle is a square
{
    return length == width;
}
