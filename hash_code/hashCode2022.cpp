#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Projet;

struct Role
{
    string nom;
    int score;
};

struct Contributeur
{
    string nom;
    vector<Role> skills;
    int scoreTotal = 0;
};

struct Projet 
{
    string nom;
    int duree;
    int score;
    int meilleurTemps;
    int _tempsMit = 0;
    int _classement = 0;
    vector<Role> rolesRequis;
    vector<Contributeur> workers;
};


int main()
{
    int nbContributors = 0;
    int nbProject = 0;

    vector<Contributeur> contributeurs;
    vector<Projet> projets;
    vector<string> role_existants;


    cin >> nbContributors >> nbProject;
    for (int i = 0; i < nbContributors; i++)
    {
        Contributeur current_contributor;
        int nbSkills = 0;
        cin >> current_contributor.nom >> nbSkills;

        for (int j = 0; j < nbSkills; j++)
        {
            Role skill;
            cin >> skill.nom >> skill.score;
            current_contributor.skills.push_back(skill);
            current_contributor.scoreTotal += skill.score;
            if (find(role_existants.begin(), role_existants.end(), skill.nom) != role_existants.end())
                role_existants.push_back(skill.nom);
        }

        contributeurs.push_back(current_contributor);
    }

    for (int i = 0; i < nbProject; i++)
    {
        Projet current_projet;
        int nbRoles;
        cin >> current_projet.nom >> current_projet.duree >> current_projet.score >> current_projet.meilleurTemps >> nbRoles;
        
        current_projet._classement -= current_projet.meilleurTemps - current_projet.duree;
        
        for (int j = 0; j < nbRoles; j++)
        {
            Role role {"", 0};
            cin >> role.nom >> role.score;
            current_projet.rolesRequis.push_back(role);
            current_projet.score += 1;
            if (find(role_existants.begin(), role_existants.end(), role.nom) != role_existants.end())
                role_existants.push_back(role.nom);
        }

        projets.push_back(current_projet);
    }

    sort(projets.begin(), projets.end(), [](Projet a, Projet b) -> bool {
        return a._classement > b._classement;
    });

    int day = 0;
    cout << "\n\n";
    
    while (!projets.empty())
    {
        for (auto P : projets)
        {
            if (P._tempsMit == 0)
            {
                
                for (auto cont : contributeurs)
                {
                    for (auto comp : cont.skills)
                    {
                        for (auto sk : P.rolesRequis)
                        {
                            if (comp.nom == sk.nom && comp.score >= sk.score)
                            {
                                bool into = false;
                                for (auto it{P.workers.begin()}; it != P.workers.end(); it++)
                                {
                                    if (it->nom == cont.nom)
                                    {
                                        into = true;
                                        break;
                                    }
                                }
                                if (!into)
                                    P.workers.push_back(cont);
                                break;
                            }
                            else if (comp.nom == sk.nom && comp.score == sk.score - 1)
                            {
                                for (auto w : P.workers)
                                {
                                    for (auto s : w.skills)
                                    {
                                        if (s.nom == sk.nom && s.score >= sk.score)
                                        {
                                            P.workers.push_back(cont);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (P.workers.size() == P.rolesRequis.size())
                {
                    cout << P.nom << endl;
                    for (auto cont : P.workers)
                    {
                        cout << cont.nom << " ";
                        for (auto it{contributeurs.begin()}; it != contributeurs.end(); it++)
                            if ((*it).nom == cont.nom)
                                contributeurs.erase(it);
                    }
                    cout << "\n";
                    P._tempsMit += 1;
                }
            }
            else if (P._tempsMit == P.duree)
            {
                for (auto cont : P.workers)
                    contributeurs.push_back(cont);
                for (auto it{projets.begin()}; it == projets.end(); it++)
                    if (it->nom == P.nom)
                        projets.erase(it);
            }
            else
            {
                P._tempsMit++;
            }
        }
        cout << "\nNbProjet Restant ---->" << projets.size() << endl;
    }

    return 0;
}