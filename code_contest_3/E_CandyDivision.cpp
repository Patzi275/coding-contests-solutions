#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
    int nb;
    cin >> nb;

    cout << 0;
    for (int i = 2; i <= nb / 2; i++)
        if (nb % i == 0)
            cout << " " << i - 1;
    cout << " " << nb - 1 << endl;   
    
    return 0;
}
