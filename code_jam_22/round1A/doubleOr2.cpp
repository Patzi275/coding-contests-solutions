#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nb;
    cin >> nb;

    for (int i = 0; i < nb; i++)
    {
        string chaine;
        cin >> chaine;
        
        string maxChaine = chaine;
        int taille = chaine.size();
        int possibility = 2 << (taille - 1);
        int melange = 1 << (taille - 1);
        
        for (int i = 0; i < possibility; i++)
        {
            string newChaine;
            for (int j = 0; j < taille; j++)
            {
                newChaine.push_back(chaine[j]);
                if ((1 << (taille - j - 1)) & melange)
                    newChaine.push_back(chaine[j]);
            }
            melange += 1;
            maxChaine = maxChaine < newChaine ? maxChaine : newChaine;
        }
        cout << "Case #" << i + 1 << ": " << maxChaine << endl;
    }
    return 0;
}
/*
Patrick
1234567
0123456
1000000 :   1 << 6  : 1 << chaine.len() - 1
0100000 :   1 << 5  : 1 << chaine.len() - 2
0010000 :   1 << 4  : 1 << chaine.len() - 3


1 << 6
*/