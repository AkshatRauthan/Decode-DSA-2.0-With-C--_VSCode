#include "iostream"
#include "string"
using namespace std;
int main() {
    string string1;
    cout<<"\nEnter The String :\n";
    getline(cin,string1);
    int count = 0,n=string1.length()-1;
    if ((string1[0] != string1[1]) && n>1) count++;
    if (n>2 && string1[n] != string1[n-1]) count++;
    for (int i=1;i<n;i++) if ((string1[i] != string1[i+1]) && (string1[i] != string1[i-1] )) count++;
    cout<<"\n\nThe Number Of Pairs Of Neighbouring Pairs With Different Elements Are : "<<count<<"\n\n";
    system("pause");
}