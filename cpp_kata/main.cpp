#include <iostream>

int main()
{

	int a{ 2 };
	int b{ 5 };

	if (a == b)
	{
		std::cout << "The variable A is equal to variable B!" << std::endl;
	}
	if (a > b)
	{
		std::cout << "A is larger than A!" << std::endl;
	}
	else
	{
		std::cout << "A is not equal to B nor is it larger..." << std::endl;
	}

	std::cin.get();
}