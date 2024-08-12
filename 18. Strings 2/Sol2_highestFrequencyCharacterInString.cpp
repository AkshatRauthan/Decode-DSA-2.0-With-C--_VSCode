#include "vector"
#include "iostream"
#include "string"
using namespace std;
int main() {
    string str;
    // Here the string has only lowercase alphabets.
    cout << "\nEnter The String Having Lowercase Alphabets Only :\n";
    getline(cin, str);
    vector<int> count(26, 0);

    //  The Above Statement Initializes A Vector With 26 Elements With Initial Value 0 For All Elements

    for (int i = 0; i < str.length(); i++) {
        count[(int) str[i] - 97]++;
    }
    int index = 0;
    int maximum = 0;
    for (int i = 0; i < 26; i++) {
        if (count[i] > maximum) {
            maximum = count[i];
            index = i;
        }
    }
    cout << "\nCharacter With Highest Frequency Is Along With Its Frequency : " << (char) (index + 97) << ","
         << maximum;
    cout << "\n\n";
    system("pause");
}