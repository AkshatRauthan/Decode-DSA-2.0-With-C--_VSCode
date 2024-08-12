#include "iostream"
#include "string"
using namespace std;

bool winnerOfGame(string s1) {
    if (s1.length()<3) return false;
    long long a=1;
    bool flag;
    char ch;
    while (a>0){
        if (a%2 == 1) ch = 'A';
        else ch ='B';
        for (int i=1;i<s1.length();i++){
            if (i==s1.length()-1) a = -1;
            else if (s1[i-1]==ch && s1[i]==ch && s1[i+1]==ch){
                s1.erase(i, 1);
                if (a%2 == 1) flag = true ;
                else flag = false;
                break;
            }
        }
        a++;
    }
    return flag;
}

int main(){
    string s1;
    cout<<"\nEnter The String Containing 'A' and 'B' Only :\n";
    cin>>s1;
    if (winnerOfGame(s1) == 1) cout<<"\nThe Winner Of Game Is Alice.\n\n";
    else cout<<"\nThe Winner Of Game Is Bob.\n\n";
    system("pause");
}