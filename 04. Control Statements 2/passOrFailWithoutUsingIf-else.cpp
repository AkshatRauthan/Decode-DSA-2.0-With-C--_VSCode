#include "iostream"
using namespace std;
int main(){
    int x;
    cout<<"Enter Your Marks Out Of 100 :-\n";
    cin>>x;
    (x>33) ? cout<<"You Have Successfully Passed The Test\n" : cout<<"You Have Successfully Failed The Test\n";
}