#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int noAdvGain, advGain, cost, nbInput;

    cin >> nbInput;
    for (int i = 0; i < nbInput; i++)
    {
        cin >> noAdvGain >> advGain >> cost;
        advGain -= cost;
        if (noAdvGain < advGain)
            cout << "advertise" << endl;
        else if (noAdvGain > advGain)
            cout << "do not advertise" << endl;
        else
            cout << "does not matter" << endl;
    }
    return 0;
}
