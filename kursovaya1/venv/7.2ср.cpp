#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    string s1 = "";
    for (int i = 0; i < s.length(); i++){
        if (s[i] != ' '){
            s1 += s[i];
        } else {
            s1 += "  ";
        }
    }
    s = s1;
    cout << s;
}
