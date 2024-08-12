#include "iostream"
#include "string"
#include "vector"
using namespace std;

int n;
vector<string> allBinaryStrings;

void printingAllStrings(){
    cout<<"\nAll The Required Strings Are As Follows :\n";
    for (string str : allBinaryStrings ) cout<<str<<endl;
}

void findingAllStrings(int count, string str){
    if (count == n){
        allBinaryStrings.push_back(str);
        return;
    }
    return findingAllStrings( count+1, str+'1'), findingAllStrings( count+1, str+'0');
}

int main(){
    cout<<"\nEnter The Length Of The String\n";
    cin>>n;
    findingAllStrings( 0, "");
    printingAllStrings();
    cout<<"\n\n";
    system( "pause");
}