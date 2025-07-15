#include<iostream>
using namespace std;

void swap(int *a, int *b)// Function to swap two integers using pointers it takes addresses of the integers where the values are stored
 {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside swap function: a = " << a << ", b = " << b << endl;
    // Note: This swap does not affect the original variables in main
}

int main(){
    int x, y;
    cout << "Enter two integers to swap: ";
    cin >> x >> y;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);// Pass the addresses of x and y to swap function
    // Now the swap function modifies the original variables
    cout << "After swap: x = " << x << ", y = " << y << endl; // The values of a and b are now swapped
    cout << "Note: The swap function modifies the original variables." << endl;
    cout << "Swap operation completed successfully." << endl;
    cout << "Program completed." << endl;
    cout << "Thank you for using the swap function!" << endl;

    return 0;
}