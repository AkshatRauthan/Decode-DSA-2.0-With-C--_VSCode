#include "iostream"
#include "string"
using namespace std;
int main() {
    string str1;
    cout << "\nEnter The String :\n";
    getline(cin, str1);
    int i=0,count=0;
    while (str1[i] != '\0') {
        if (str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'){
            count++;
        }
        i++;
    }
    cout<<"\n\nThe Number Of Vowels Are : "<<count<<"\n\n";
    system("pause");
}