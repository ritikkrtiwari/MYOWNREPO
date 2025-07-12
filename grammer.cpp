#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str); //read a line of input including spaces.

    int vowels= 0, consonants = 0, digits = 0, spaces = 0, specialChars = 0;

    for(int i=0; str[i]!='\0'; i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) //check if the character is an alphabet.
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
               str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
            {
                vowels++; //increment vowel count.
            }
            else
            {
                consonants++; //increment consonant count.
            }
        }
        else if(str[i]>='0' && str[i]<='9') //check if the character is a digit.
        {
            digits++; //increment digit count.
        }
        else if(str[i]==' ') //check if the character is a space.
        {
            spaces++; //increment space count.
        }
        else
        {
            specialChars++; //increment special character count.
        }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of spaces: " << spaces << endl;
    cout << "Number of special characters: " << specialChars << endl;
    return 0;
}