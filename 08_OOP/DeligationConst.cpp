#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
        string teaName;
        int servings;
        vector<string> ingredients;

        // deligating constructor
        Chai(string name): Chai(name, 1, {"Water", "Tea leaves"}){}

        // main constructor
        Chai(string name, int serve, vector<string> ingre){
            teaName = name;
            servings = serve;
            ingredients = ingre;

            cout << "Main Constructor called." << endl;
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
    Chai quickChai("Quick chai");
    quickChai.displayChaiDetails();
    return 0;
}