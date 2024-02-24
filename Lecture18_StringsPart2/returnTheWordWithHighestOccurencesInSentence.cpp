#include "algorithm"
#include "iostream"
#include "sstream"
#include "string"
#include "vector"
using namespace std;
int main() {
    string str ;
    cout<<"\nEnter The Sentence :\n";
    getline(cin,str);
    stringstream ss(str);
    vector<string> temp;
    for (string s;ss>>s;) temp.push_back(s);
    sort(temp.begin(),temp.end());
    int maxn = 0;
    string mx;
    int count;
    for (int i=0;i<temp.size();i++){
        if (temp[i] == temp[i+1]) count++;
        else count = 1;
        maxn = max(maxn, count);
    }
    count =1;
    cout<<"\n\nThe Words With Maximum Occurrences Are \n";
    for (int i=0;i<temp.size();i++){
        if (temp[i] == temp[i+1]) count++;
        else count = 1;
        if (count == maxn) cout<<temp[i]<<" : "<<maxn<<" Times\n";
    } cout<<"\n";
    system("pause");
}