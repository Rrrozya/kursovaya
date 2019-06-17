#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool isw = false;
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++){
        if (s[i] != ' '){
            isw = true;
        } else {
            isw = false;
        }
        if (!isw && s[i + 1] != ' '){
            if (s[i+1] == 'b'){
                count++;
            }
        }
    }
    cout << count;
}
