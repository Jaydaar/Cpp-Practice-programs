#include <iostream>

int main()
{
	double x, y, maxLeft, maxRight, maxTop, maxBottom;
	bool xInRange, yInRange, pointOn;
	const double width = 10;
	const double height = 5;
	// Accept the point to check

	// Prompt the user for the input
	std::cout << "Enter the x and y coordinate separated by spaces: ";
	// Accept the x (double) and y (double) coordinates
	std::cin >> x >> y;

	// Set limit values
	// Define the maxLeft (double) and maxRight (double) limit
	maxLeft = -width / 2;
	maxRight = width / 2;
	// Define the maxTop (double) and maxBottom (double) limit
	maxTop = -height / 2;
	maxBottom = height / 2;

	// Check point (Unnecessary section this can be placed directly into if statements)
	// Placed to simplify understanding
	// Check the x coordinate to see if xInRange (bool) of left and right limit
	xInRange = x > maxLeft && x < maxRight;
	// Check the y coordinate to see if yInRange (bool) of top and bottom limit
	yInRange = y > maxTop && y < maxBottom;
	// Check if the point is on the line edge of the rectangle
	pointOn = x == maxLeft || x == maxRight || y == maxTop || y == maxBottom;

	// Print output
	// If both x and y are in the limit then the point is inside the rectangle
	if (xInRange && yInRange)
	{
		std::cout << "The point (" << x << ", " << y << ") is INSIDE of the rectangle" << std::endl;
	}
	// Else if x is equal to maxLeft or maxRight OR y is equal to maxTop or maxBottom the point is on the rectangle edge
	else if (pointOn)
	{
		std::cout << "The point (" << x << ", " << y << ") is ON the rectangle" << std::endl;
	}
	// Else it is outside of the rectangle
	else
	{
		std::cout << "The point (" << x << ", " << y << ") is OUTSIDE of the rectangle" << std::endl;
	}
	return 0;
}
