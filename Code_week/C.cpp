#include <iostream>
#include <unordered_set>

using namespace std;
int main(int argc, char const *argv[])
{
    unordered_set<string> pieces{};
    int p, n, nbDay = -1;

    cin >> p >> n;
    for (int i = 0; i < n; i++)
    {
        string enter;
        cin >> enter;
        pieces.insert(enter);
        if (pieces.size() == p && nbDay == -1)
            nbDay = i;
    }
    if (nbDay == -1)
        cout << "paradox avoided" << endl;
    else
        cout << nbDay + 1 << endl;

    return 0;
}
