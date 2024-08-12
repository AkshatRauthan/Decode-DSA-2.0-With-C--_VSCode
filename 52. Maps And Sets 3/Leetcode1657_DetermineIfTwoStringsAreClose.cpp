#include "iostream"
#include "unordered_map"
#include "unordered_set"
#include "vector"
using namespace std;
bool closeStrings(string str1, string str2) {
    if (str1.length()!=str2.length()) return false;
    unordered_map<char,int> m1;
    unordered_map<char,int> m2;
    for (int i=0; i<str1.length(); i++){
        m1[str1[i]]++;
        m2[str2[i]]++;
    }
    for (auto p : m1) if (m2.find(p.first)==m2.end()) return false;
    unordered_map<int,int> i1;
    unordered_map<int,int> i2;
    for (auto p : m1) i1[p.second]++;
    for (auto p : m2) i2[p.second]++;
    if (i1 == i2) return true;
    return false;
}