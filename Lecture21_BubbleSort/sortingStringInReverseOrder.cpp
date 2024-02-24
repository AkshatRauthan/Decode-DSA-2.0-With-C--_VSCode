#include "iostream"
#include "string"
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
    bool flag = true;
    for (int i=0; i<str.size()-1 && flag; i++) {
        flag = false;
        for (int j=0; j<str.size()-1-i; j++) {
            if (str[j] < str[j + 1]) {
                swap(str[j], str[j + 1]);
                flag = true;
            }
        }
    }
    cout<<"\nThe String After Making The Required Changes Is As Follows : "<<str<<"\n\n";
    system("pause");
}
