/*
    This program takes your weight in pounds and height in inches to calculate your BMI.
    
    2 inputs required
    weight (double)
    height (double)
    
*/

#include <iostream>
using namespace std;

int main() {
    
    // Take weight in pounds
    cout << "Enter your weight in pounds: " << endl;
    double weight;
    cin >> weight;
    
    // Take height in inches
    cout << "Enter your height in inches: " << endl;
    double height;
    cin >> height;
    
    // Convert pounds to kilograms
    const double POUNDS_TO_KILOGRAMS = 0.45359237;
    double weightInKilograms = weight * POUNDS_TO_KILOGRAMS;
    
    // Convert inches to meters
    const double INCHES_TO_METERS = 0.0254;
    double heightInMeters = height * INCHES_TO_METERS;
    
    // Calculate BMI
    double bmi = weightInKilograms / (heightInMeters * heightInMeters);
    
    // Display BMI
    cout << "Your BMI is: " << bmi;
	return 0;
}
