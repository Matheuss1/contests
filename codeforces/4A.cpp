#include <iostream>

int main()
{
    int kilos;
    std::cin >> kilos;

    if (kilos % 2 == 0 && kilos / 2 != 1) 
        std::cout << "YES" << std::endl;
    else
        std::cout << "NO" << std::endl;
    return 0;
}