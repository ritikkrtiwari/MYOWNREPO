#include<iostream>
using namespace std;

void swap(int &a, int &b)// Function to swap two integers using references because it takes the actual variables and & used to indicate call by reference 
//call by reference means that the function receives references to the original variables, allowing it to modify them directly
 {
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swap function: a = " << a << ", b = " << b << endl;     
    // Note: This swap modifies the original variables in main
    // because we are using references (call by reference)
}

int main(){
    int x, y;
    cout << "Enter two integers to swap: ";
    cin >> x >> y;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);// Pass the addresses of x and y to swap function
    // Now the swap function modifies the original variables
    cout << "After swap: x = " << x << ", y = " << y << endl; // The values of a and b are now swapped
    cout << "Address of x: " << &x << ", Address of y: " << &y << endl; // Display addresses of x and y
    cout << "Values of x and y after swap: " << x << ", " << y << endl; // Display values of x and y after swap
    cout << "Addresses of x and y after swap: " << &x << ", " << &y << endl; // Display addresses of x and y after swap
    cout << "Note: The swap function modifies the original variables." << endl;
    cout << "Swap operation completed successfully." << endl;
    cout << "Program completed." << endl;
    cout << "Thank you for using the swap function!" << endl;

    return 0;
}