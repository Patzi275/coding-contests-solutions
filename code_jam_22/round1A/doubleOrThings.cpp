#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nb;
    cin >> nb;

    for (int i = 0; i < nb; i++)
    {
        string chaine, newChaine;
        char pre;
        cin >> chaine;
        int tailleChaine = chaine.size();

        for (int i = 1; i <= tailleChaine; i++)
        {
            newChaine.push_back(chaine[i - 1]);
            if (chaine[i - 1] == chaine[i] == chaine[i + 1])
                continue;
            if (chaine[i - 1] < chaine[i])
                newChaine.push_back(chaine[i - 1]);
        }

        cout << "Case #" << i + 1 << ": " << newChaine << endl;
    }

    return 0;
}
/*
PEEL
PEEEL
*/
