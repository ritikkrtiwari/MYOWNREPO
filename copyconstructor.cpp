#include<iostream>
using namespace std;

class Rectangle {
    int* length; // dynamically allocated length
    int width;
public:
    // Parameterized constructor
    Rectangle(int l, int w) {
        length = new int(l); // new se memory allocate ki
        width = w;
    }

    // Copy constructor (default shallow copy)
    Rectangle(const Rectangle& r) //here copy constructor is called and &r is a reference to the original object means it does not create a new memory location for length
        : length(new int(*r.length)), width(r.width) // deep copy of pointer means it creates a new memory location for length
    {
        length = r.length; // shallow copy of pointer means it points to the same memory location
        width = r.width;
    }

    // Function to display values
    void display() {
        cout << "Length: " << *length << ", Width: " << width << endl;
    }

    // Destructor (memory free karne ke liye)
    ~Rectangle() {
        delete length;
    }
};

int main() {
    Rectangle rect1(10, 5); // original object creation
    Rectangle rect2 = rect1; // here copy constructor is called by using the default shallow copy and both objects share the same memory for length

    cout << "Original: ";
    rect1.display();
    cout << "Copied: ";
    rect2.display();

    return 0;
}
