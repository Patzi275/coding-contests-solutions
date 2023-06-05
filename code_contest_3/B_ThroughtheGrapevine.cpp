#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

struct Person
{
    int skept;
    vector<string> friends;
    bool know;
    bool visited;
};

int main(int argc, char const *argv[])
{
    int nbPerson, nbConnection, nbDay, informed = 1;
    unordered_map<string, Person> people;

    cin >> nbPerson >> nbConnection >> nbDay;

    for (int i = 0; i < nbPerson; i++)
    {
        Person p;
        string name;
        cin >> name >> p.skept;
        p.know = false;
        p.visited = false;
        people[name] = p;
    }

    for (int i = 0; i < nbConnection; i++)
    {
        string name1, name2;
        cin >> name1, name2;
        people[name1].friends.push_back(name2);
        people[name2].friends.push_back(name1);
    }

    string firstPersonName;
    cin >> firstPersonName;
    
    for (int day = 1; day <= nbDay; day++)
    {
        for (auto it {people.begin()}; it != people.end(); it++)
            it->second.visited = false;

        people[firstPersonName].visited = true;
        for (int i = 0; i < people[firstPersonName].friends.size(); i++)

        for (auto it {people.begin()}; it != people.end(); it++)
        {

        }
    }

    return 0;
}

