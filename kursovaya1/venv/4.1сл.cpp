#include <iostream>

using namespace std;

int main() {
    int a[7], b[7];
    for (int i = 0; i < 7; i++){
        cin >> a[i];
    }
    for (int i = 0; i < 7; i++){
        b[i] = a[i]/10;
    }
    for (int i = 0; i < 7; i++){
        cout << b[i] << " ";
    }
}
