#include<iostream>
#include<vector>
using namespace std;

class Chai{
    private:
        string teaName;
        int servings;
        vector<string> ingredients;

    public:
        Chai(){   // cosntructor
            teaName = "Unknow Tea";
            servings = 1;
            ingredients = {"Water", "Tea Leaves"};
        }

        Chai(string name, int serve, vector<string> ingre){ //parameter constructor
            teaName = name;
            servings = serve;
            ingredients = ingre;
        }

        //getter
        string getTeaName(){
            return teaName;
        }
        // setter
        void setTeaName(string name){
            // logic
            teaName = name;
        }


        // getter for serving
        int getServings(){
            return servings;
        }
        // setter for serving
        void setServings(int serve){
            servings = serve;
        }


        // getter for ingre
        vector<string> getIngredients(){
            return ingredients;
        }
        // setter for ingre
        void setIngredients(vector<string> ingr){
            ingredients = ingr;
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
    Chai chai;
    chai.setTeaName("Ginger Tea");
    chai.displayChaiDetails();
    return 0;
}