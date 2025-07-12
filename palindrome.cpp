#include<iostream>
using namespace std;
int main(){
    int n , r , m , rev=0;
    cout << "Enter a number: ";
    cin >> n;
    m=n; // Store the original number in m
    while(n > 0) {
        r = n % 10; // Get the last digit
        n = n / 10; // Remove the last digit
        rev=rev * 10 + r; // Build the reversed number
    }
    cout << "Reversed Number: " << rev << endl; // Print the reversed number
    if(rev == m){
        cout << "The Number Is Palindrome" << endl; // Check if the number is a palindrome
    } else {
        cout << "The Number Is Not Palindrome" << endl; // If not, print this message
    }
    return 0; // Exit the program
}