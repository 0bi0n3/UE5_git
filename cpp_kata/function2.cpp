#include <iostream>
// Not using namespace std on purpose.

void welcome()
{
	std::cout << "Welcome! \n";
}

void printNumber(int numToPrint)
{
	std::cout << numToPrint << std::endl;
}

int add(int a, int b)
{
	int result;
	result = a + b;
	return result;
}

int main()
{
	welcome();

	printNumber(4);

	int c;
	c = add(2, 9);
	printNumber(c);


	std::cin.get();
}