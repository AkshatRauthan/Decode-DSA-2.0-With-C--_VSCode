#include <iostream>
#include <vector>
#include "algorithm"
using namespace std;
int main() {
    //                            VECTORS
    //              Syntax : vector <dataType> v;
    //              Vector Is Like An Array With Variable Size.
    //              A Vector Can Be Declared Without Mentioning Its Size.
    //              Every Time A New Element Is Inserted Into A Fully Filled Vector Its Capacity Doubles.
    vector<int> v;

    // v.push_back(a) : Inserts The Value Of Variable 'a' In The End Of The Vector v.
    // v.capacity()   : Return The Maximum Number Of Element That The Vector Can Store Upto The Particular Instance.
    // v.size()       : Returns The Number Of Elements Present In The Vector.
    // v.pop_back()   : Removes The Last Element From The Vector. It Reduces The Size Not The Capacity Of The Vector.
    // v.at(i)        : Fetches The Element Present On The 'i' Index. Can Also Be Used To Modify Its Value.
    // v.sort()       :

    // If The Vector Is Full Then Its Capacity Will Get Doubled.
    // Rule 1 : Always Use Predefined Methods To Pass Values In Vectors.
    // Rule 2 : If We Use   {v[0] = 5}  Statement To Initialise The Value Of First Element It Will Give Error.
    // Rule 3 : If We Use {v[i] = 5} Statement After Initialising Value Of Any Element Using Predefined Methods
    //          It Will Not Give Any Errors.
    // Rule 4 : If We Use   {v[i] = 5}  Statement To Initialise The Value Of The 'i' Index And The Vector Is Already
    //          Filled To Maximum Capacity Then The Index 'i' Will Not Be Added In The Vector.
    // Rule 5 : We Can Update The Values Of Elements Using {v[i] = 5}  Statement.

    // Conclusion : Always USe Predefined Method While Assigning Values To Indices.
    v.push_back(9);
    cout << endl << "  Size  : " << v.size() << "  Capacity  : " << v.capacity() << endl;
    v.push_back(8);
    cout << "  Size  : " << v.size() << "  Capacity  : " << v.capacity() << endl;
    v.push_back(7);
    cout << "  Size  : " << v.size() << "  Capacity  : " << v.capacity() << endl;
    v.push_back(6);
    cout << "  Size  : " << v.size() << "  Capacity  : " << v.capacity() << endl;
    v.push_back(5);
    cout << "  Size  : " << v.size() << "  Capacity  : " << v.capacity() << endl;
    v.push_back(4);
    cout << "  Size  : " << v.size() << "  Capacity  : " << v.capacity() << endl;
    v.push_back(3);
    cout << "  Size  : " << v.size() << "  Capacity  : " << v.capacity() << endl;
    v.push_back(2);
    cout << "  Size  : " << v.size() << "  Capacity  : " << v.capacity() << endl;
    v.push_back(1);
    cout << "  Size  : " << v.size() << "  Capacity  : " << v.capacity() << endl;
    v.pop_back();
    sort(v.begin(), v.end());
    v.at(0)=100;
    cout << "  Size  : " << v.size() << "  Capacity  : " << v.capacity() << endl << endl;
    for (int i = 0; i < v.size(); i++) cout << "  " << v[i] << "\n";
    system("pause");
}
