#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int client_number{};
    int qt;
    float moy{};
    string name;
    vector<int> points{};
    vector<string> ingredients;

    cin >> client_number;
    for (int i = 0; i < client_number; i++)
    {
        cin >> qt;
        for (int j = 0; j < qt; j++)
        {
            cin >> name;
            auto it = std::find(ingredients.begin(), ingredients.end(), name);
            if (it == ingredients.end())
            {
                ingredients.push_back(name);
                points.push_back(0);
                it = std::find(ingredients.begin(), ingredients.end(), name);
            }
            points[it - ingredients.begin()]++;
            moy++;
        }

        cin >> qt;
        for (int j = 0; j < qt; j++)
        {
            cin >> name;
            auto it = std::find(ingredients.begin(), ingredients.end(), name);
            if (it == ingredients.end())
            {
                ingredients.push_back(name);
                points.push_back(0);
                it = std::find(ingredients.begin(), ingredients.end(), name);
            }
            points[it - ingredients.begin()]--;
            moy--;
        }
    }    

    int nbIngredients{};
    string final_ingredient{};
    moy /= points.size();
    for (int i = 0; i < points.size(); i++)
    {
        if (points[i] >= moy)
        {
            nbIngredients++;
            final_ingredient.append(" ").append(ingredients[i]);
        }
    }

    cout << nbIngredients << final_ingredient << endl; 

    return 0;
}
