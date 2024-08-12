#include <algorithm>
#include "iostream"
#include "string"
using namespace std;
int main() {
    string str1;
    cout<<"\nEnter The String :\n";
    getline(cin, str1);
    if (str1.length() == 0){
        cout<<"\nPlease Enter A Valid String\n\n";
        system("pause");
        return 0;
    } else if (str1.length() == 1){
        cout<<"\n\nThe Element With The Highest Frequency Is : "<<str1[0]<<"\n\n";
        system("pause");
        return 0;
    }
    else {
        sort(str1.begin(), str1.end());
        char temp = str1[0];
        char max_element;
        int maxnum = 0;
        for (int i = 0, count = 0; str1[i] != '\0'; i++) {
            if (str1[i] == temp) count++;
            else {
                if (count > maxnum) {
                    maxnum = count;
                    max_element = str1[i - 1];
                }
                temp = str1[i];
                count = 1;
            }
        }
        cout<<"\n\nThe Element With The Highest Frequency Is : "<<max_element<<"\n\n";
    }
    system("pause");
}