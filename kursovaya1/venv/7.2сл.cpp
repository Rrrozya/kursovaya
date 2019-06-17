#include <iostream>
#include <cmath>

using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0;
    bool islow = true, isw = false;
    for (int i = 0; i < s.length()-1; i++){
        if (s[i] != ' '){
            isw = true;
            if (!(s[i] >= 'a' && s[i] <= 'z')){
                islow = false;
            }
        } else {
            if (isw && islow)
                count++;
            isw = false;
            islow = true;
        }
    }
    cout << count;
}
