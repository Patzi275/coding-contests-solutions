#include <iostream>
#include <vector>
#include <array>

std::vector<bool> Eratosthene(int entier)
{
    std::vector<bool> isPrimary(entier , true);
    
    for (int i = 4; i < isPrimary.size(); i+=2)
        isPrimary[i] = false;
    isPrimary[0] = false;

    int i = 3;
    while (i * i <= entier)
    {
        if (isPrimary[i])
            for (int j = i * i; j <= entier; j += 2 * i)
                isPrimary[j] = false;
        i++;
    }
    return isPrimary;
}

std::array<std::vector<int>, 2> decomposition(int entier)
{
    int i = 1;
    std::vector<bool> isPrimary {Eratosthene(entier / 2)};
    std::vector<int> exposant{};

    std::vector<int> nbPremier{};

    for (int j = 0; j < isPrimary.size(); j++)
    {
        if (isPrimary[j])
            nbPremier.push_back(j);
    }

    while (entier != 1)
    {
        int expo = 0;
        while (entier % nbPremier[i] == 0)
        {
            entier /= nbPremier[i];
            expo++;
            std::cout << "dedans" << entier << " " << nbPremier[i] << std::endl;
        }
        exposant.push_back(expo);
        i++;
    }
    return std::array<std::vector<int>, 2> {nbPremier, exposant};
}

using namespace std;

int main(int argc, char const *argv[])
{
    auto dec = decomposition(39);
    for (int i = 0; i < dec.front().size(); i++)
    {
        if (dec[1][i])
            cout << dec[0][i] << "^" << dec[1][i] << endl;
    }
    return 0;
}
