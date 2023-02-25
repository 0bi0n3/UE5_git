#include <iostream>

int main()
{
    
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            for (int k = 0; k <= 5; k++)
            {
                std::cout << "i = " << i << " , j = " << j << " , k = " << k << std::endl;
            }
        }
    }

    std::cin.get();
}
