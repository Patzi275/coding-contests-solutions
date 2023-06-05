#include <iostream>
#include <map>

using namespace std;

int main(int argc, char const *argv[])
{
    int nbInput;

    cin >> nbInput;
    for (int i = 0; i < nbInput; i++)
    {
        map<int, int> diceNumber;
        int nbDie;
        int currentFace = 0;
     
        cin >> nbDie;
        for (int j = 0; j < nbDie; j++)
        {
            int nbFace;
            cin >> nbFace;
            if (diceNumber.find(nbFace) == diceNumber.end())
                diceNumber.insert({nbFace, 1});
            else
                ++diceNumber[nbFace];
        }

        for (auto p : diceNumber)
        {
            int nbDieCanTake = p.first - currentFace;
            if (nbDieCanTake <= 0)
                continue;
            currentFace += nbDieCanTake > p.second ? p.second : nbDieCanTake;
        }
        cout << "Case #" << i + 1 << ": " << currentFace << endl;
    }
    return 0;
}
