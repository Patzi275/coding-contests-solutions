#include <iostream>

using namespace std;

void printNFois(string chaine, int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << chaine;
    }
}

int main(int argc, char const *argv[])
{
    int nb, r, c;
    
    cin >> nb;
    for (int i = 0; i < nb; i++)
    {
        cin >> r >> c;
        cout << "Case #" << i+1 << ":" << endl;
        if (r * c == 0)
            continue;
        
        //First line
        cout << "..+";  printNFois("-+", c - 1);  cout << endl;
        cout << "..|";  printNFois(".|", c - 1);  cout << endl;

        //The rest
        for (int j = 0; j < r - 1; j++)
        {
            cout << "+";    printNFois("-+", c);    cout << endl;
            cout << "|";    printNFois(".|", c);    cout << endl;
        }
        
        //Final line
        cout << "+";    printNFois("-+", c); cout << endl;
    }
    return 0;
}
