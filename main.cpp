#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[N_ELEMENTS]; 
    std::cout << "1-100 ertekek duplazasa"; //pontos vessző
    for (int i = 0; i < N_ELEMENTS; i++) //ciklusfeltételek hiányosak
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:";
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS; i++) 
    {
        atlag += b[i];
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    std::cout << "Mi az? Piros és roncsolja a fogat....tégla..." << std:endl;
    return 0;
}
