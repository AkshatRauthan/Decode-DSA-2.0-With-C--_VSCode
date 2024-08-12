#include "iostream"
#include "string"
using namespace std;
int main(){
    string str1 = "Akshat Rauthan";
    cout<<"The Initial String Is : \n"<<str1;
    cout<<"\n\nEnter The New String\n";
    getline(cin,str1);
    // Using getline() Function To Take String Input Even After Putting Space.
    cout<<"The New String Is : \n"<<str1<<"\n\n";
    system("pause");
}