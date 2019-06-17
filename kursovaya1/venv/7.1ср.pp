#include <iostream>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool isw = false;
    int count = 0;
    for (int i = s.length()-1; i >= 0; i--){
        if (s[i] == ' '){
            if (isw)
                break;
        } else {
            isw = true;
            if (s[i] == 'k')
                count++;
        }
    }
    cout << count;
}
