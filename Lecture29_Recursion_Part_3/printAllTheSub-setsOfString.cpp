#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
using namespace std;

vector<string> subSets;
string str;

void findAllSubsets(int idx, string sub){
    if (idx == str.length()) {
        subSets.push_back(sub);
        return;
    }
    if ((str[idx-1] != str[idx]) || idx == 0 || (idx == str.length()-1 && str[idx] != str[idx-1]))
    return findAllSubsets(idx+1,sub+str[idx]), findAllSubsets(idx+1,sub);
    else return findAllSubsets( idx+1, sub);
}

int main(){
    cout<<"\nEnter The Required String : \n";
    getline(cin,str);
    sort( str.begin(), str.end());
    findAllSubsets(0, "");
    cout<<"\n\nThe Sub-sets Of the Given String Are : \n";
    for (string s : subSets) {
        if ( s == "\0") cout<<"\\0"<<endl;
        else cout<<s<<endl;
    }
    cout<<"\n\n";
    system("pause");
}