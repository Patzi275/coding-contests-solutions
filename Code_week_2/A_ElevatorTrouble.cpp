#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int f, s, g, u, d, nbPush = 0;;
    cin >> f >> s >> g >> u >> d;
    while (s != g)
    {
        if (s < g)
            s += u;
        else if (s > g)
            s -= d;
        nbPush++;
    }
    cout << nbPush << endl;
    return 0;
}
