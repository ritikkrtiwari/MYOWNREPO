#include<iostream>
using namespace std;

class Rectangle {
    int* length; // dynamically allocated length
    int width;
public:
    // Parameterized constructor
    Rectangle(int l, int w) {
        length = new int(l); // heap me nayi memory allocate ki
        width = w;
    }

    // Deep copy constructor
    Rectangle( Rectangle& r) // yahan copy constructor call hota hai aur &r original object ka reference hai,
    {
        length = new int(*r.length); // Here we create a new memory location for length not just copy the pointer as in shallow copy it means it creates a new memory location for length
        width = r.width;
    }

    // Function to display values
    void display() {
        cout << "Length: " << *length << ", Width: " << width << endl;
    }

    // Destructor
    ~Rectangle() {
        delete length; // memory free ki
    }
};

int main() {
    Rectangle rect1(10, 5); // pehla object banaya
    Rectangle rect2 = rect1; // yahan copy constructor call hota hai, yeh default shallow copy nahi karta, balki deep copy karta hai means yeh nayi memory location banata hai length ke liye

    cout << "Original: ";
    rect1.display();
    cout << "Copied: ";
    rect2.display();

    return 0;
}
