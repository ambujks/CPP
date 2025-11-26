#include<iostream>
#include<vector>

using namespace std;

class Chai{
    public:
        // data members (attributes)
        string teaName; // name of tea.
        int serving; // number of servings.
        vector<string> ingredients; //list of ingredients for the tea.

        // Member function

        void displayChaiDetails(){
            cout << "Tea Name : " << teaName << endl;
            cout << "Servings : " << serving << endl;
            cout << "Ingredients : ";
            for(string ingred : ingredients){
                cout << ingred << " ";
            }
            cout << endl;
        }

        void style(){
            cout << "---------------------" << endl;
        }
    // private:
        
};

int main()
{
    Chai chaiOne;

    chaiOne.teaName = "Lemon Tea";
    chaiOne.serving = 2;
    chaiOne.ingredients = {"Water", "Lemon", "Honey", "Tea"};

    chaiOne.displayChaiDetails();

    chaiOne.style();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala Chai";
    chaiTwo.serving = 4;
    chaiTwo.ingredients = {"Water", "Milk", "Tea", "Ginger" ,"Masala"};

    chaiTwo.displayChaiDetails();

    chaiTwo.style();

    return 0;
}