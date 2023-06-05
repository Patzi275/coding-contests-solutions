#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string chaine{};
    string resultat{};
    cin >> chaine;
    int taille = chaine.size();

    for (char c : chaine)
    {
        if (c == '<')
            resultat.pop_back();
        else
            resultat += c;
    }
    
    cout << resultat;

    return 0;
}
