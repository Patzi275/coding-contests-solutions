#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool isPalindrom(int j)
{
    string nbString = to_string(j);
    int len = nbString.size();

    for (int k = 0; k < len / 2; k++)
    {
        if (nbString[k] != nbString[len - k - 1])
        {
            return false;
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{
    int nb = 0;
    cin >> nb;

    for (int i = 0; i < nb; i++)
    {
        int number;
        int nbPalindrom = 1;
        cin >> number;

        int len = to_string(number).size();
        int nbIteration = round(len / 2);  
        int a = 1, b = 10;


        for (int j = 2; j < 10; j++)
            if (number % j == 0)
                nbPalindrom++;

        for (int j = 11; j <= number / 2; j++)
        {
            if (number % j != 0)
                continue;

            if (isPalindrom(j))
                nbPalindrom++;
        }

        if (number > 9 &&isPalindrom(number))
            nbPalindrom++;

        cout << "Case #" << i+1 << ": " << nbPalindrom << endl;
    }
    return 0;
}
