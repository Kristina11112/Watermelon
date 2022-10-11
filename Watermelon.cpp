
#include <iostream>

int main()
{
	int a;
	std::cout << "Input number";
	std::cin >> a;

	if (a % 2 == 0 && (a / 2) % 2 == 0)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}
	
	std::cout << "Goodbye!";
}
