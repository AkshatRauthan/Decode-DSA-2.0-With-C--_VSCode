#include <algorithm>
#include "iostream"
#include "string"
using namespace std;
int main() {
    string str1;
    cout<<"\nEnter The String : \n";
    getline(cin,str1);
    sort(str1.begin(),str1.end());
    // Sort function Sorts In Lexicographical Order.
    // Simply Arranges All The Elements In Ascending Order Of Their ASCII Values.
    cout<<"\nThe Sorted Array Is : \n";
    cout<<str1<<"\n\n";
    system("pause");
}