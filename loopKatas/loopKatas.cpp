#include <iostream>

int main()
{
    double numberPi = 3.14159;
    double numberE = 2.718281828;

    int count = 0;

    bool Condition = true;

    do 
    {
        std::cout << "The number of Pi is: " << numberPi << std::endl;
        std::cout << "The Number e is: " << numberE << std::endl;
        std::cout << "Count: " << count << std::endl;
        std::cout << "Pi + e*count = " << numberPi + numberE * count << std::endl;

        count++;
        if (count <= 100)
        {
            Condition = true;
        }
        else
        {
            Condition = false;
        }
       
    } while (Condition);

    std::cin.get();
}
