#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int nbInput;
    int nbA = 1,
        nbB = 0,
        lastNbB = 0;

    cin >> nbInput;
    for (int i = 0; i < nbInput; i++)
    {
        lastNbB = nbB;
        nbB += nbA;
        nbA = lastNbB;
    }
    cout << nbA << " " << nbB << endl;
    return 0;
}
