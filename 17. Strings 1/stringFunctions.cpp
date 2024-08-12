#include <algorithm>
#include "iostream"
#include "string"
using namespace std;
int main() {
    string str1 = "Akshat ",str2 = "Rauthan";
    cout<<"Length Of String : "<<str1.length()<<" Or "<<str1.size();
    str1.push_back('1');
    cout<<"\nstr.push_back('1') : "<<str1;
    str1.pop_back();     // Deleting Last Character
    cout<<"\nstr.pop_back() : "<<str1;
    cout<<"\nstr1 + str2 : "<<str1+str2;
    reverse(str1.begin(),str1.end());
    cout<<"\nReversing String str1 : "<<str1;
    reverse(str2.begin()+2,str2.end()-1);
    cout<<"\nReversing String str2 from element 3 to 6: "<<str2;
    str1 = "Akshat ";
    cout<<"\nstr1.erase(3, 1);"<<str1.erase(3, 1);
    cout<<endl;
    system("pause");
}