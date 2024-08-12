#include "iostream"
#include "string"
using namespace std;

class player{

private:            // Access Specifier
    int health;     // Data Fields Or Attributes
    int score;
    string name;

public:
    player (string name, int health, int score){
        // Constructor Of Class Player :
        // Here Player Class Is The Return Type Of The Constructor.
        // They Do Not Have Any Name.
        // When Called Returns An Object Of The Class In Which They Are Present.
        this -> health = health;  // This : Generic Pointer To Passed Variable Present In Parent Class.
        this -> name = name;      // Therefore, This Statement Put The Values Passed In Function To Their
        this -> score = score;    // Respective Data Fields Of The Current Object Of Parent Class.
    }

    ~player (){      // Destructor For Class Player.
        cout<<"Destructor Called For Player "<<name<<"\n";
    }

    void stats(){   // Getter Function
        cout<<"\n"<<name;
        cout<<"\n"<<score;
        cout<<"\n"<<health;
    }
};

int main(){
    // Alan : An Object Belonging To Player Class.
    player alan("Alan", 1000, 250);     // Creating Object Using Constructors.
    alan.stats();
    cout<<"\nAAA\n";
}