#include<iostream>
using namespace std;

template <class T>
T max(T x, T y, T z){
    if(x > y && x > z){
        return x;
    } else if(y > x && y > z){
        return y;
    } else {
        return z;
    }
}
int main(){
    int a, b, c, maxInt;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;
    maxInt = max(a, b, c);
    cout << "Maximum integer = " << maxInt << endl;

    double d1, d2, d3, maxDouble;
    cout << "Enter three doubles: ";
    cin >> d1 >> d2 >> d3;
    maxDouble = max(d1, d2, d3);
    cout << "Maximum double = " << maxDouble << endl;

    float f1, f2, f3, maxFloat;
    cout << "Enter three floats: "; 
    cin >> f1 >> f2 >> f3;
    maxFloat = max(f1, f2, f3);
    cout << "Maximum float = " << maxFloat << endl;

    char ch1, ch2, ch3, maxChar;
    cout << "Enter three characters: ";
    cin >> ch1 >> ch2 >> ch3;
    maxChar = max(ch1, ch2, ch3);   
    cout << "Maximum character = " << maxChar << endl;

    string str1, str2, str3, maxString;
    cout << "Enter three strings: ";
    cin >> str1 >> str2 >> str3;
    maxString = max(str1, str2, str3);
    cout << "Maximum string = " << maxString << endl;
    cout << "All maximum values computed successfully." << endl;
    cout << "Program completed." << endl;
    cout << "Thank you for using the maximum value finder!" << endl;



    return 0;
}