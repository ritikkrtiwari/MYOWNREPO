#include<iostream>
using namespace std;

// 🔹 Different operations ke functions
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return (b != 0) ? a / b : 0; } // b!=0 check for zero division

int main()
{
    // 🔹 Array of function pointers (4 operations)
    int (*operations[4])(int, int) = { add, subtract, multiply, divide };

    int choice, x, y;

    // 🔹 User se input lena
    cout << "Enter two numbers: " << endl;
    cin >> x >> y;

    cout << endl; // New line for better readability

    // 🔹 Menu dikhana
    cout << "Choose operation:" << endl;
    cout << "0: Add" << endl;
    cout << "1: Subtract" << endl;
    cout << "2: Multiply" << endl;
    cout << "3: Divide" << endl;
    cout << "Enter your choice (0-3): " << endl;
    cin >> choice;

    cout << endl; // Formatting ke liye new line

    // 🔹 Switch-case to check valid choice and call function pointer
    switch(choice)
    {
        case 0:
        case 1:
        case 2:
        case 3:
            // operations[choice](x, y) -> correct function ko call karta hai
            cout << "Result: " << operations[choice](x, y) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    cout << "Thank you for using the calculator!" << endl; // Ending message

    return 0;
}
