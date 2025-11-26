#include<iostream>
#include<vector>

using namespace std;

class Chai {
    public:
        string teaName;
        int servings;
        vector<string> ingredients;


        // parameter Constructor.
        Chai(string name, int serve, vector<string> ingr){
            teaName = name;
            servings = serve;
            ingredients = ingr;
            cout << "Parameter Constructor called. " << endl; 
        }

        void displayChaiDetails(){
            cout << "Tea Name : " << teaName << endl;
            cout << "Servings : " << servings << endl;
            cout << "Ingredients : ";
            for(string ingred : ingredients){
                cout << ingred << " ";
            }
            cout << endl;
        }
};

int main()
{
    Chai  lemonTea("Lemon Tea", 2, {"Water", "Lemon" , "Honey"});

    lemonTea.displayChaiDetails();

    return 0;
}