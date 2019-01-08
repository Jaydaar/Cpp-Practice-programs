#include <iostream>
#include <cmath>


int main()
{
	double x, y, distance;
	const int RADIUS = 10;
	// Take the input for a point
	std::cout << "Enter the x and y value for a point separated by a space: " << std::endl;
	std::cin >> x >> y;

	// Determine distance form the center of circle
	distance = pow((pow(x, 2) + pow(y, 2)), 0.5);

	// compare distance and radius
	if (distance < RADIUS)
	{
		std::cout << "Point (" << x << ", " << y << ") is in the circle." << std::endl;
	}
	else if (distance > RADIUS)
	{
		std::cout << "Point (" << x << ", " << y << ") is outside the circle." << std::endl;
	}
	else if (distance == RADIUS)
	{
		std::cout << "Point (" << x << ", " << y << ") is on the circle." << std::endl;
	}
	else
	{
		std::cout << "There was an error with the distance calculation." << std::endl;
	}
	return 0;
}
