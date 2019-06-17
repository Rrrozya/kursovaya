#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, y;
    cin >> x >> y;
    if ((y <= cos(x)) && (y >= 0.5))
        cout << "True";
    else
        cout << "False";
}
