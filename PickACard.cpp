#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	// Generate two random numbers
	srand(time(0));
	int number1 = rand() % 13;
	int number2 = rand() % 4;
	std::cout << "The card you picked is ";

	// Use the first random number to choose a rank
	switch (number1)
	{
	case 0: std::cout << "Ace "; break;
	case 1: std::cout << "2 "; break;
	case 2: std::cout << "3 "; break;
	case 3: std::cout << "4 "; break;
	case 4: std::cout << "5 "; break;
	case 5: std::cout << "6 "; break;
	case 6: std::cout << "7 "; break;
	case 7: std::cout << "8 "; break;
	case 8: std::cout << "9 "; break;
	case 9: std::cout << "10 "; break;
	case 10: std::cout << "Jack "; break;
	case 11: std::cout << "Queen "; break;
	case 12: std::cout << "King "; break;
	}

	std::cout << "of ";
	// Use the second random number to choose a suit
	switch (number2)
	{
	case 0: std::cout << "Clubs." << std::endl;break;
	case 1: std::cout << "Diamonds." << std::endl;break;
	case 2: std::cout << "Hearts." << std::endl;break;
	case 3: std::cout << "Spades." << std::endl;break;
	}
	return 0;
}
