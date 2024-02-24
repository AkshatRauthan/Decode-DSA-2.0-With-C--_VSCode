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
    for (int i=0; i<str.size()-1; i++){
        int min = INT_MAX;
        int mindex = 0;
        for (int j=i; j<str.length(); j++ ){
            if (str[j] < min){
                min = str[j];
                mindex= j;
            }
        }
        swap(str[i],str[mindex]);
    }
    reverse(str.begin(),str.end());
    cout<<"\nThe String After Making The Required Changes Is As Follows : "<<str<<"\n\n";
    system("pause");
}