/*
    This program takes the coordinates of the three point of the triangle and returns its area.
    
    6 inputs required (separate the x and y values by a space on separate lines for each point)
    
    x1 y1 (double)
    x2 y2 (double)
    x3 y3 (double)
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // Accept points of the triangle
    double x1, x2, x3, y1, y2, y3;
    cout << "Enter the first point: " << endl;
    cin >> x1 >> y1;
    
    cout << "Enter the second point: " << endl;
    cin >> x2 >> y2;
    
    cout << "Enter the third point: " << endl;
    cin >> x3 >> y3;
    
    // calculate length of each side
    double side1, side2, side3;
    
    side1 = pow(pow((x2 - x1), 2) + pow((y2 - y1), 2), 0.5);
    side2 = pow(pow((x3 - x2), 2) + pow((y3 - y2), 2), 0.5);
    side3 = pow(pow((x3 - x1), 2) + pow((y3 - y1), 2), 0.5);
    
    // Calculate semi perimeter
    double s = 0.5 * (side1 + side2 + side3);
    
    // Calculate Area
    double area = pow((s * (s - side1) * (s - side2) * (s - side3)), 0.5);
    
    // Display area
    cout << "The area of the triangle is: " << area;
	return 0;
}
