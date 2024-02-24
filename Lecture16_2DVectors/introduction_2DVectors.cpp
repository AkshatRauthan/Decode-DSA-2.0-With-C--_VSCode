#include "iostream"
#include "vector"
using namespace std;
int main(){
    // In 2d vectors each element of the vector is itself a vector.
    // Simply, 2d vector is like a 2d array with variable row and column numbers.

    // The main ways to declare a 2d vector are :-
    vector<vector<int>> v1;
    vector<vector<int>> v2(5);
    vector<vector<int>> v3(5, vector<int> (5));
    vector<vector<int>> v4(5, vector<int> (5,0));

    // The Basic STL Functions In Vectors Are :-
    // push_back()
    // pop_back()
    // begin()
    // end()
    // rbegin()
    // rend()
}