#include <iostream>

// Functions prototypes.
void welcome();
char getYesNo();
void printResponse(char responseToPrint);
void askYesOrNoQuestion();


int main()
{
	// Ask user to answer y or n and returns reponse.
	askYesOrNoQuestion();

	std::cin.get();
}

// Function definitions.
void welcome()
{
	// Welcomes user.
	std::cout << "Welcome adventurer! \n";
}

char getYesNo()
{
	// Ask for user input.
	std::cout << "Please enter y or n. \n";

	char answer;
	std::cin >> answer;
	return answer;
}

void printResponse(char responseToPrint)
{
	// Print user input result.
	std::cout << "Your answer was: " << responseToPrint << std::endl;
}

// Refactored functions.
void askYesOrNoQuestion()
{
	welcome();
	char response = getYesNo();
	printResponse(response);
}