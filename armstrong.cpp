#include<iostream>
using namespace std;
int main(){
    int n , r , m, sum=0;
    cout << "Enter a number: ";
    cin >> n;
    m=n; // Store the original number in m
    while(n > 0) {
        r = n % 10; // Get the last digit
        n = n / 10; // Remove the last digit
        sum=sum + r*r*r; // Calculate the sum of cubes of digits
    }
    if(sum == m){
        cout << "The Number Is Armstrong Number" << endl;
    }else{
        cout << "The Number Is Not Armstrong Number" << endl;
    }
    return 0; // Exit the program
}