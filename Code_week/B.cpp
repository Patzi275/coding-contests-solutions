#include <iostream>

using namespace std;

bool isInGrid(int x, int y, int l)
{
    return (x >= 0 && x < l) && (y >= 0 && y < l);
}

int main(int argc, char const *argv[])
{
    int **matrice;
    int maxOfChain, cote;
    cin >> cote >> maxOfChain;

    matrice = new int*[cote];
    for (int i{}; i < cote; i++)
    {
        matrice[i] = new int[cote];
    }

    for (int i{}; i < cote; i++)
    {
        for (int j{}; j < cote; j++)
        {
            int valeur;
            cin >> valeur;
            matrice[i][j] = valeur;
        }
    }

    
    for (int i{}; i < cote; i++)
    {
        for (int j{}; j < cote; j++)
        {
            int currentValue = 1;
            if (matrice[i][j] == 1)
            {
                
            }
            cout << matrice[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
