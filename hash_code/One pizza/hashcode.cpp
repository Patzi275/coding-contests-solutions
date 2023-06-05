#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int C,L,D;
    vector <string> like;
     vector <string> dlike;
     vector <string> finale;
     string ingredient;

     do
     {
         cin >>C;
     }while(C<0 || C>5);
     for(int i(0);i<C;i++)
     {
         cin >>L;
         for(int j(0);j<L;j++)
         {
             /*Ingredient like    */
            cin >>ingredient;
            if(like.size()==0)
            {
                like.push_back(ingredient);
            }
            else{
                bool trouve(false);
                for(int k=0;k<like.size();k++)
                {
                    if(like[k]==ingredient)
                    {
                        trouve=true;
                        break;
                    }
                }
               if(!trouve)
                {
                like.push_back(ingredient);
                }
            }

         }
          /*Ingredient dislike    */
          cin >>D;
         for(int j(0);j<D;j++)
         {

            cin >>ingredient;
            if(dlike.size()==0)
            {
                dlike.push_back(ingredient);
            }
            else{
                bool trouve(false);
                for(int k=0;k<dlike.size();k++)
                {
                    if(dlike[k]==ingredient)
                    {
                        trouve=true;
                        break;
                    }
                }
               if(!trouve)
                {
                like.push_back(ingredient);
                }
            }
             /*Ingredient dislike    */
         }

     }
/*deslike      */
bool delt;
for(int i(0);i<like.size();i++)
{
   for(int j(0);j<dlike.size();j++)
   {
       if(like[i]==dlike[j])
       {
           like.erase(like.begin()+i);
       }
   }

}
/*Enlever doublons     */
for(int i(0);i<like.size();i++)
{
   for(int j(0);j<like.size();j++)
   {

       if(like[i]==like[j] && i!=j)
       {
           like.erase(like.begin()+i);
       }
   }
}
 cout << like.size() <<" ";
for(int i(0);i<like.size();i++)
{
    cout << like[i] <<" ";
}
    return 0;
}
