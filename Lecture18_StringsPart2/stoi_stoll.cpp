#include "string"
#include "iostream"
using namespace std;
int main(){
    string str = "1234567890";
    int x = stoi(str);     // String To Index
    cout<<x<<"  ";
    string s ="12345678901234567890";
    long long l = stoll(s);
    cout<<l<<"  ";
}