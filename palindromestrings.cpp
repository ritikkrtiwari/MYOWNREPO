#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // read a line of input including spaces

    int len = str.length(); // get the length of the string
    string rev(len, ' '); // create a string of same length with spaces

    // reverse the string by copying characters from end of 'str' to start of 'rev'
    for(int i=0, j=len-1; i<len; i++, j--) {
        rev[i] = str[j]; // rev[0]=str[len-1], rev[1]=str[len-2], ... so 'rev' becomes reverse of 'str'
    }

    cout << "Reversed string: " << rev << endl;

    // create lowercase copies of original and reversed strings for case-insensitive comparison
    string str_lower = str;
    string rev_lower = rev;

    // convert all characters of str_lower to lowercase
    for(int i=0; i<str_lower.length(); i++) {
        str_lower[i] = tolower(str_lower[i]); // each character is converted to its lowercase form
    }

    // convert all characters of rev_lower to lowercase
    for(int i=0; i<rev_lower.length(); i++) {
        rev_lower[i] = tolower(rev_lower[i]); // each character is converted to its lowercase form
    }

    // compare the lowercase versions: if they match, it's a palindrome
    if(str_lower == rev_lower) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
