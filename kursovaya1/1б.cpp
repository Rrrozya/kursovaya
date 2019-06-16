#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, y;
    cin >> y >> x;
    float v = log(y + 0.95) + sin(pow(x, 4));
    cout << v;
    return 0;
}
