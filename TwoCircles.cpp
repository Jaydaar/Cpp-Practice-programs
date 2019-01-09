/*
    This program takes the centre and radius of two circles and determines if they overlap one is inside the other or one is outside the other.
    
    6 required input
    xCenter1 (double) yCenter1 (double) radius1 (double) - make sure each is separated by spaces.
    xCenter2 (double) yCenter2 (double) radius2 (double) - make sure each is separated by spaces.
*/
#include <iostream>
#include <cmath>

int main()
{
	// Declare variables
	double xCenter1, yCenter1, radius1, xCenter2, yCenter2, radius2, centerSeparation, maximumInternalSeparation, minimumExternalSeparation;

	// Accept input for the circles
		// Accept xCenter1 (double) yCenter1 (double) and radius1 (double) separated by spaces for circle 1
		std::cout << "Enter the x-coordinate, y-coordinate and radius for the first circle separated by spaces: ";
		std::cin >> xCenter1 >> yCenter1 >> radius1;
		// Accept xCenter2 (double) yCenter2 (double) and radius2 (double) separated by spaces for circle 2
		std::cout << "\nEnter the x-coordinate, y-coordinate and radius for the second circle separated by spaces: ";
		std::cin >> xCenter2 >> yCenter2 >> radius2;
		
	// Process data and produce output
		// Determine distance between centers (centreSeparation - double)
		centerSeparation = pow(pow(xCenter2 - xCenter1, 2) + pow(yCenter2 - yCenter1, 2), 0.5);
		// Determine the maximum distance for circle 2 from the center of circle 1 to be inside circle 1 (maximumInternalSeparation - double)
		maximumInternalSeparation = abs(radius1 - radius2);
		// Determine the minimum distance for circle 2 from the center of circle 1 to be outside circle 1 (minimumExternalSeparation - double)
		minimumExternalSeparation = radius1 + radius2;
		// Use logical conditions to produce outputs
		if (centerSeparation <= maximumInternalSeparation)
		{
			std::cout << "\nCircle 2 is INSIDE circle 1." << std::endl;
		}
		else if (centerSeparation <= minimumExternalSeparation)
		{
			std::cout << "\nCircle 2 is OUTSIDE circle 1." << std::endl;
		}
		else
		{
			std::cout << "\nCircle 2 OVERLAPS circle 1." << std::endl;
		}
	return 0;
}
