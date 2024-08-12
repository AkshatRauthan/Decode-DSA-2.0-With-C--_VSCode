#include "iostream"
#include "vector"
#include "string"
using namespace std;

vector<string> solution;
int n;

void displaySolutions(){
    cout<<"\nThe Required Vector Of "<<n<<" Rows Is : \n";
    for (string s : solution) cout<<s<<endl;
}

void kthGrammar(int count){
    if (count == n) return;
    string temp;
    for (char ch : solution[count]){
        if (ch == '0') temp += "01";
        else temp += "10";
    }
    solution.push_back(temp);
    return kthGrammar(count+1);
}

int main(){
    int k;
    cout<<"\nEnter The First Binary Element :\n";
    cin>>k;
    cout<<"\nEnter The Number Of Rows To Be Present In The Vector : \n";
    cin>>n;
    if (k == 1) solution.push_back("1");
    else if (k == 0) solution.push_back("0");
    kthGrammar(0);
    displaySolutions();
    cout<<"\n\n";
    system("pause");
}
