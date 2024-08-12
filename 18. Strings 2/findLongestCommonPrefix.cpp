#include "algorithm"
#include "iostream"
#include "string"
#include "vector"
using namespace std;

vector<string> initialize(){
    cout<<"Enter The Number of Strings :\n";
    int n;
    cin>>n;
    vector<string> v;
    cout<<"Enter The Strings Seperated By Whitespaces :\n";
    string temp;
    for (int i=0;i<n;i++){
        cin>>temp;
        v.push_back(temp);
    }
    return v;
}

string longestCommonPrefix(vector<string>& v){
    sort(v.begin(),v.end());
    string common="";
    string first=v[0],end=v[v.size()-1];
    for (int i=0;i<min(first.size(),end.size());i++){
        if (first[i] == end[i]) common+= first[i];
        else return common;
    }
    return common;
}

int main() {
    vector<string> v = initialize();
    cout<<"\nThe Longest Common Prefix Amongst All The Strings Is : '"<<longestCommonPrefix(v)<<"'\n\n";
    system("pause");
}