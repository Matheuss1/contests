#include <iostream>

int main()
{
    double num;
    int i, aux = 0;
    double interval[4][2] = {{0, 25}, {25, 50}, {50, 75}, {75, 100}};
    std::cin >> num;

    for (i = 0; i < 4; i++) {
        if (i == 0) {
            if (num >= interval[i][0] && num <= interval[i][1]) {
                std::cout << "Intervalo [" << interval[i][0] << "," << interval[i][1] << ']' << std::endl;    
                aux = 1;
                break;
            }
        }
        else if (num > interval[i][0] && num <= interval[i][1]) {
            std::cout << "Intervalo (" << interval[i][0] << "," << interval[i][1] << ']' << std::endl;
            aux = 1;
            break;
        }
    }
    if (aux == 0) {
        std::cout << "Fora de intervalo" << std::endl;
    }
    return 0;
}