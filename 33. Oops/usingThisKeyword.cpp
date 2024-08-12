#include "iostream"
using namespace std;

class Car{
public:
    int price{};
    string name;
    Car()= default; // Default Constructor.

    Car(string name, int price){
        this->name = name;
        this->price = price;
    }
};

int main(){
    Car c1("Tesla Model X", 1000000);
    cout<<endl<<c1.name<<"   "<<c1.price<<endl;
}