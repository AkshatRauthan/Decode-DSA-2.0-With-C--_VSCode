#include "iostream"
using namespace std;

class Car{
public:
    int price;
    string name;
};

void change1(Car &x){
    x = {800000, "Honda Amaze"};
}

void change2(Car *x){
    (*x).price = 800000;
    (*x).name = "Honda";
}

void change3(Car *x){
    *x = {800000, "Honda City"};
}

void change4(Car *x){
    x->price = 800000;
    x->name = "Volvo";
}

int main(){
    Car c1 = {10000,"Kia Sonnet"};
    change4(&c1);
    cout<<endl<<c1.name<<"  "<<c1.price<<endl;
}