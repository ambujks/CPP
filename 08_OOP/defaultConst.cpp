#include<iostream>
#include<vector>

using namespace std;

class Chai {
    public:
        string teaName;
        int servings;
        vector<string> ingredients;


        // default Constructor.
        Chai(){
            teaName = "Unknow Tea";
            servings = 1;
            ingredients = {"Water", "Tea Leaves"};
            cout << "Constructor called. " << endl; 
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
    Chai  defaultChai;

    defaultChai.displayChaiDetails();

    return 0;
}