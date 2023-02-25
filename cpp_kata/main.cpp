#include <iostream>

int MyFunction(int param_one, int param_two);

int main()
{
	int var_in_main = MyFunction(2, 3);
	int Another_var = MyFunction(var_in_main, 4);
	MyFunction(var_in_main, Another_var);


	std::cin.get();
}

int MyFunction(int param_one, int param_two)
{
	int local_variable;
	local_variable = param_one + param_two;
	std::cout << "The local variable is " << local_variable << std::endl;
	return local_variable;
}