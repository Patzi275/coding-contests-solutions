#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    long nbInput;
    long nombre;
    cin >> nbInput;
    for (int i = 0; i < nbInput; i++)
    {
        cin >> nombre;
        int nbCarre = 0;
        for (int j = 1; j < nombre; j++)
        {
            if (j*j <= nombre || j*j*j <= nombre)
                nbCarre++;
        }
        cout << nbCarre + 1 << endl;
    }
    return 0;
}
