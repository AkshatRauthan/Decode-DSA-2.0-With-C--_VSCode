#include <algorithm>
#include "iostream"
#include "string"
using namespace std;
int main() {
    // Assume The String Is Having Even Number Of Elements
    string str1;
    cout<<"Enter The String With Even Number OF Elements :\n";
    getline(cin,str1);
    reverse(str1.begin(),str1.begin()+str1.length()/2);
    cout<<"\nThe Half Reversed String Is : "<<str1<<"\n\n";
    system("pause");
}