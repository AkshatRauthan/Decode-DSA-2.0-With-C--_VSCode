#include "iostream"
#include "string"
#include "algorithm"
using namespace std;
int main(){
    //        Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
    //        Input : str = "2947578"
    //        Output : 8
    cout<<"\nEnter The Required Number :\n";
    string s1;
    getline(cin,s1);
    sort(s1.begin(),s1.end());
    for (int i=s1.length()-1;i>=1;i++){
        if (s1[i] != s1[i-1]) {
            cout << "The Second Largest Number Is : " << s1[i - 1];
            break;
        }
    }
    cout<<"\n\n";
    system("pause");
}