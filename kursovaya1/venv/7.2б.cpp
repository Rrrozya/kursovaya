#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    s = s.substr(0, s.size()-1);
    cout << s;
}
