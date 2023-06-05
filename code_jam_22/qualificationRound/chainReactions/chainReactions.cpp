#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

inline int max(int a, int b) {
    return (a < b ? b : a);
}


int main()
{
    int T; 
    
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        int *funFactors = new int[N];
        int *childIndex = new int[N];
        short *isUsed =  new short[N];
        int maxFun = 0;
        vector<int> initiatorIndex;

        for (int j = 0; j < N; j++)
            cin >> funFactors[j];

        for (int j = 0; j < N; j++)
        {
            cin >> childIndex[j];
            --childIndex[j];
        }

        for (int j = 0; j < N; j++)
            if (count(childIndex, childIndex + N, j) == 0)
                initiatorIndex.push_back(j);
        
        do
        {
            int sessionFun = 0;

            for (int j = 0; j < N; j++)
                isUsed[j] = false;
            
            for (int initiator : initiatorIndex)
            {
                int currentModule = initiator;
                int maxChainFun = funFactors[currentModule];
                isUsed[currentModule] = true;
                do
                {
                    currentModule = childIndex[currentModule];
                    if (isUsed[currentModule])
                        break;
                    maxChainFun = max(funFactors[currentModule], maxChainFun);
                    isUsed[currentModule] = true;
                } while (childIndex[currentModule] != 0);
                sessionFun += maxChainFun;
            }
            maxFun = max(maxFun, sessionFun);
        } while (next_permutation(initiatorIndex.begin(), initiatorIndex.end()));

        cout << "Case #" << i + 1 << ": " << maxFun << endl;

    }
    
    return 0;
}