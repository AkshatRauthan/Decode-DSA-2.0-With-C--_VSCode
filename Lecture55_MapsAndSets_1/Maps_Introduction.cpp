#include "iostream"
#include "unordered_map"
using namespace std;

// Maps Are Data Structures That Stores Unique Elements In Unordered Manner.
// Insertion In Sets :  O(1)
// Searching In Sets :  O(1)
// Deletion In Sets  : O(1)

int main(){
    unordered_map<string,int> m;

    //                 ________Inserting Elements Into The Set________

    // Method 1) Using Pair Class.
    pair<string,int> p1;
    p1.first  = "Akshat"; // Key
    p1.second = 1;        // Value
    m.insert(p1);
    pair<string,int> p2;
    p2.first = "Anand";
    p2.second = 2;
    m.insert(p2);
    pair<string,int> p3;
    p3.first = "Akash";
    p3.second = 6;

    // Method 2) Inserting Directly.( Just Like Python Dictionaries )
    m["Alan"] = 3;
    m["Walker"] = 4;
    m["Raghav"] = 5;

    //                 ________Inserting Elements Into The Set________
    cout<<"\nThe Elements Of The Map Are As Follows : \n";
    for (auto p : m) cout<<p.first<<"  :  "<<p.second<<endl;

    //                   ________Searching Elements In A Map________
    cout<<"\n\nEnter The Key Whose Value You Want To Search In The Map : \n";
    string s;
    cin>>s;
    if (m.find(s) != m.end())  cout<<"\nThe Value Of "+s+" In The Map Is "<<m[s];
    else cout<<"\nThe Requested Key-Value Pair Do Not Exist In The Map.";

    cout<<"\n\n";
    system("pause");
}