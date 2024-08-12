#include "iostream"
#include "unordered_set"
using namespace std;

// Sets Are Data Structures That Stores Unique Elements In Unordered Manner.
// Insertion In Unordered Sets :  O(1)
// Searching In Unordered Sets :  O(1)
// Deletion In  Unordered Sets  : O(1)

// In Ordered Sets All The Operations Have A Time Complexity Of log(N) As They Are Implemented
// On The Basis Of BST.

// Hash Sets : Unordered Sets.                 // Sets : Ordered Ses.

int main(){
    //                       ________Initialising Sets________
    unordered_set<int> s;
    // Ordered Sets Can Also Be Initialised Using set Header File As :  set<int> s;
    // The Only Difference Is That It Stores Data In Sorted Increasing Order.
    // Rest All The Operations Remains Same.

    //                 ________Inserting Elements Into The Set________
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    // Here, Each Element Will Be Inserted Once.
    // As Sets Do Not Allow Duplication of Elements.
    // So Elements Will Be Inserted Only Once Even If We Insert Them More Than Once.


    //                      ________Printing Elements Of Sets________
    cout<<"The Elements Of The Set Are As Follows : \n";
    for(int x : s) cout<<x<<"  ";


    //                  ________Deleting Elements From The Sets________
    s.erase(1);
    s.erase(2);
    cout<<"\n\nThe Set After Deletion Is as Follows : \n";
    for(int x : s) cout<<x<<"  ";

    //                       ________Searching In Map________
    cout<<"\n\nEnter The Element To Search In The Set :\n";
    int n;
    cin>>n;
    if (s.find(n) != s.end()) cout<<"\nYes, "<<n<<" Is Present In The Set.\n";
    else cout<<"\nNo, "<<n<<" Is Not Present In The Set.\n";
    // Logic : s.find() Searches In Set And If The Element Is Not Found Returns s.end().
    // s.end() Is Iterator Next To The Last Value In Set.

    cout<<"\n\n";
    system("pause");
}