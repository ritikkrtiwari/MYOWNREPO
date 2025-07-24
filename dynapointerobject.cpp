#include<iostream>
#include<cmath>
using namespace std;
// Define a class
class Rectangle // Rectangle is a class
{
    public: // Attributes and methods of the class are public means accessible from outside the class
    int length; // length is an attribute of class Rectangle
    int width;  // width is an attribute of class Rectangle

    int area() // area is a method of class Rectangle
    {
        return length * width; // returns the area of the rectangle
    }

    int perimeter() // perimeter is a method of class Rectangle
    {
        return 2 * (length + width); // returns the perimeter of the rectangle
    }
    int diagonal() // diagonal is a method of class Rectangle
    {
        return sqrt(length * length + width * width); // returns the diagonal of the rectangle
    }
};

int main(){
    Rectangle *ptr1 = new Rectangle; // Dynamically allocated pointer to rectangle 1 and they are in heap memory 
    Rectangle *ptr2 = new Rectangle; // Dynamically allocated pointer to rectangle 2 and they are in heap memory 
    Rectangle *ptr3 = new Rectangle; // Dynamically allocated pointer to rectangle 3 and they are in heap memory 

    // Reusing the same class for multiple rectangles
    cout << "Rectangle Class Demonstration" << endl;
    cout << "Enter length and width of rectangle 1: ";
    cin >> ptr1->length >> ptr1->width; // input for rectangle 1
    cout << "Area of rectangle 1: " << ptr1->area() << endl; // output area of rectangle 1
    cout << "Perimeter of rectangle 1: " << ptr1->perimeter() << endl; // output perimeter of rectangle 1
    cout << "Diagonal of rectangle 1: " << ptr1->diagonal() << endl; // output diagonal of rectangle 1

    
    // Reusing the same class for another
    cout << "Enter length and width of rectangle 2: ";
    cin >> ptr2->length >> ptr2->width; // input for rectangle 2
    cout << "Area of rectangle 2: " << ptr2->area() << endl; // output area of rectangle 2
    cout << "Perimeter of rectangle 2: " << ptr2->perimeter() << endl; // output perimeter of rectangle 2
    cout << "Diagonal of rectangle 2: " << ptr2->diagonal() << endl; // output diagonal of rectangle 2
    
    // Reusing the same class for another
    cout << "Enter length and width of rectangle 3: ";
    cin >> ptr3->length >> ptr3->width; // input for rectangle 3
    cout << "Area of rectangle 3: " << ptr3->area() << endl; // output area of rectangle 3
    cout << "Perimeter of rectangle 3: " << ptr3->perimeter() << endl; // output perimeter of rectangle 3
    cout << "Diagonal of rectangle 3: " << ptr3->diagonal() << endl; // output diagonal of rectangle 3

    // Free dynamically allocated memory
    delete ptr1; // Free memory for rectangle 1
    delete ptr2; // Free memory for rectangle 2 
    delete ptr3; // Free memory for rectangle 3
    return 0;
    
}