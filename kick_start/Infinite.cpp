#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, char const *argv[])
{
    int nb;
    cin >> nb;

    for (int i = 0; i < nb; i++)
    {
        int R, A, B;
        double area = 0;
        bool left = true;
        
        cin >> R >> A >> B;

        while (R >= 1 ) 
        {
            area += M_PI * R * R;

            if (left)
                R *= A;
            else
                R /= B;
            left = !left;
        }
        cout << "Case #" << i+1 << ": " << area << endl;
    }
    return 0;
}
