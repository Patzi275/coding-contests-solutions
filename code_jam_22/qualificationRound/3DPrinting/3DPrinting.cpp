#include <iostream>
#include <algorithm>
#include <array>
#define MILLION 1000000

using namespace std;

int main(int argc, char const *argv[])
{
    int T, c, m, y, k;
    array<int, 3> all_c, all_m, all_y, all_k;
    
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int somme = 0;

        cout << "Case #" << i + 1 << ": ";
        for (int j = 0; j < 3; j++)
        {
            cin >> all_c[j] >> all_m[j] >> all_y[j] >> all_k[j];
        }
        c = *min_element(all_c.begin(), all_c.end());
        m = *min_element(all_m.begin(), all_m.end());
        y = *min_element(all_y.begin(), all_y.end());
        k = *min_element(all_k.begin(), all_k.end());
        somme = c + m + y + k;
        
        if (somme == MILLION)
            printf("%d %d %d %d\n", c, m, y, k);
        else if (somme > MILLION)
        {
            int surplus = somme - MILLION;
            array<int, 4> colors{c, m, y, k};
            for (int j = 0; j < 4; j++)
            {
                auto maxElementIt = max_element(colors.begin(), colors.end());
                if (*maxElementIt >= surplus)
                {
                    *maxElementIt -= surplus;
                    break;
                }
                else
                {
                    surplus -= *maxElementIt;
                    *maxElementIt = 0;
                }
            }
            printf("%d %d %d %d\n", colors[0], colors[1] ,colors[2], colors[3]);
        }
        else
            cout << "IMPOSSIBLE" << endl;
    }
    return 0;
}
