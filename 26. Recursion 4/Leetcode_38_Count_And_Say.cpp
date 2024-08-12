#include "iostream"
#include "string"
using namespace std;

string str = "1";

void countAndSay(int num, int n){
    if (num == n) return;
    string temp;
    for (int i=0; i<str.length(); i++){
        int count = 1;
        while (str[i] == str[i+1] && str[i+1] != '\0'){
            count++;
            i++;
        }
        temp += to_string(count) + str[i];
    }
    str = temp;
    return countAndSay( num+1, n);
}

int main(){
    int n;
    cout<<"\nEnter The Value Of n : \n";
    cin>>n;
    countAndSay(1,n);
    cout<<"\nThe Required String Is : "<<str;
    cout<<"\n\n";
    system("pause");
}