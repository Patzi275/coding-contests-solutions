#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int tableau[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    
    do 
    {
        for (int i = 0; i < 10; i++)
            cout << tableau[i] << " ";
        cout << endl;
    } while (next_permutation(tableau, tableau + 10));

    return 0;
}
