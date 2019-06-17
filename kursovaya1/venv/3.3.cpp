#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    float sum = x;
    int p = 1, z = 1;
    for (int i = 1; i <= n; i++){
        z = z * (z + 1) * (z + 2) * (z + 3) * (z + 4);
        p += 4;
        sum += float(pow(x, p)/z);
    }
    cout << sum;
}
