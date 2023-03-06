// arrayKata.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
	int myIntArray[10];

	for (int i = 0; i < 10; i++)
	{
		myIntArray[i] = i;
		//std::cout << myIntArray[i] << std::endl;
	}
	std::cout << "The first element in the array is : " << myIntArray[0] << std::endl;

	std::cout << "The fifth element in the array is : " << myIntArray[4] << std::endl;

	int mySecondArray[5] = { 1, 23, 5, 4, 9 };

	std::cout << "My second array at element zero: " << mySecondArray[0] << std::endl;
	std::cout << "My second array element 2 is: " << mySecondArray[2] << std::endl;
	std::cout << "My second array with element 5 is: " << mySecondArray[4] << std::endl;

	for (int i = 0; i < 5; i++)
	{
		std::cout << "My second array[" << i << "] = " << mySecondArray[i] << std::endl;
	}


	std::cin.get();
}
