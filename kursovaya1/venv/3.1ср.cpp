#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int k, j = 1;
    float w = 0;
    cin >> k;
    for (int i = 1; i <= k; i++){
        j *= i;
        w += pow(-1, i) * pow(i-3, 2) / j;
    }
    cout << w;
}
