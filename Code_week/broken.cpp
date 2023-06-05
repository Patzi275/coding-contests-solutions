#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    string slats;
    int nbBrokenSwords;
    int horizontal = 0, vertical = 0;
    int nbSwords = 0;
    
    cin >> nbBrokenSwords;
    for (int i = 0; i < nbBrokenSwords; i++)
    {
        cin >> slats;
        vertical += (slats[0] == '0') + (slats[1] == '0');
        horizontal += (slats[2] == '0') + (slats[3] == '0');

        if (horizontal >= 2 && vertical >= 2)
        {
            horizontal -= 2;
            vertical -= 2;
            nbSwords++;
        }
    }

    cout << nbSwords << " " << vertical << " " << horizontal << endl;
    return 0;
}
