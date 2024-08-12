#include "iostream"
#include "string"
#include "algorithm"
using namespace std;

// Sort A String In Decreasing Order Of Values Associated After Removal Of Strings Smaller Than A Given Character
// Without Using Built-In Sort Function.

int main(){
    cout<<"\nEnter The Lower-Case Or Upper-Case String : \n";
    string str1;
    cin>>str1;
    string str;
    cout<<"\nEnter The Threshold Lower-Case Or Upper-Case Character : \n";
    char ch;
    cin>>ch;
    for (int i=0; str1[i]!='\0'; i++){
        if ((int)ch <= (int)str1[i]) str += str1[i];
    }
    for (int i=1; i<str.length(); i++)  for (int j=i; j>0 && str[j-1]>str[j]; j--)  swap(str[j-1],str[j]);
    reverse(str.begin(),str.end());
    cout<<"\nThe String After Making The Required Changes Is As Follows : "<<str<<"\n\n";
    system("pause");
}