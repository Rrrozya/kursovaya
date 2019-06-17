#include <iostream>

using namespace std;

int main() {
    int a = 1, n;
    cin >> n;
    while (n != 0){
        a *= n;
        cin >> n;
    }
    cout << a;
}
