#include "iostream"
#include "string"
#include "algorithm"
using namespace std;
int main(){
    //  Input a string and concatenate with its reverse string and print it.
    //  Input : str = "PWSkills"
    //  Output : "PWSkillssllikSWP"
    string s1,s2;
    cout<<"\nEnter The String :\n";
    getline(cin,s1);
    s2 = s1;
    reverse(s2.begin(),s2.end());
    s1 += s2;
    cout<<"\nThe Required String Is : "<<s1<<"\n\n";
    system("pause");
}