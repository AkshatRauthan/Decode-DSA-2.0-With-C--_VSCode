#include "iostream"
#include "string"
using namespace std;
int main() {
    string arr[] = {"0123", "0023", "456", "00182", "040", "2901"};
    int max = stoi(arr[0]);
    for (int i=0;i<6;i++) if (max < stoi(arr[i])) max = stoi(arr[i]);
    cout<<"The Largest Number Is :"<<max<<"\n\n";
    system("pause");
}