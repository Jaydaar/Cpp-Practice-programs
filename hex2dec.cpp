/*
    Listing 6.18-Introduction to C++ Programming (Third Edition) by Y. Daniel Liang
    This program takes a hexadecimal value and changes it to a decimal value.
    
    1 input required
    hex number (string)
*/


#include <iostream>
#include <string>
#include <cctype>
using namespace std;

// Converts a hex number as a string to decimal
int hex2Dec(const string& hex);

// Converts a hex character to decimal value
int hexCharToDecimal(char ch);

int main() {
    //Prompt the user to enter a hex number as a string
    cout << "Enter a hex number:\n";
    string hex;
    cin >> hex;
    
    cout << "The decimal value: " << hex << "\nThe hexadecimal value: " << hex2Dec(hex) << endl;
    
	return 0;
}

int hex2Dec(const string& hex)
{
    int decimalValue = 0;
    for (unsigned i = 0; i < hex.size(); i++)
        decimalValue = decimalValue * 16 + hexCharToDecimal(hex[i]);
    
    return decimalValue;
}

int hexCharToDecimal(char ch)
{
   ch = toupper(ch); // Change it to uppercase
   if (ch >= 'A' && ch <= 'F')
   {
       return 10 + ch - 'A';
   }
   else
   {
       return ch - '0';
   }
        
}
