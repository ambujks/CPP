#include<iostream>
#include<vector>

using namespace std;

class Chai {
    public:
        string* teaName;
        int servings;
        vector<string> ingredients;


        // parameter Constructor.
        Chai(string name, int serve, vector<string> ingr){
            teaName = new string(name);
            servings = serve;
            ingredients = ingr;
            cout << "Parameter Constructor called. " << endl; 
        }

        // copy Constructor.
        Chai(const Chai& other){
            teaName = new string(*other.teaName);
            servings = other.servings;
            ingredients = other.ingredients;
            cout << "Copy Constructor called. " << endl; 
        }

        ~Chai(){
            delete teaName;
            cout << "Destructor called." << endl;
        }

        void displayChaiDetails(){
            cout << "Tea Name : " << *teaName << endl;
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
    // lemonTea.displayChaiDetails();

    // copy the object
    Chai copiesChai = lemonTea;
    // copiesChai.displayChaiDetails();

    *lemonTea.teaName = "Modified Lemon Tea";

    cout << "Lemon Tea ----------" << endl;
    lemonTea.displayChaiDetails();
    cout << "Copied Tea ----------" << endl;
    copiesChai.displayChaiDetails();

    return 0;
}