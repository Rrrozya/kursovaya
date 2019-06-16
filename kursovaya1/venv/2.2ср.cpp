#include <iostream>

using namespace std;

int main() {
    int s = 20;
    int day, time, S;
    cin >> day >> time;
    S = time * s;
    if (day < 6){
        cout << S;
    } else {
        cout << 0.8 * S;
    }
}
