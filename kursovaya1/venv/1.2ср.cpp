#include <iostream>
#include <math.h>

using namespace std;

int main() {
    const float m = 1.8;
    float k;
    cin >> k;
    float x = float(pow(exp(1.0), m*k));
    cout << x;
    float c = float(pow(cos(m), 2)+pow(k, 2));
    cout << c;
    float y = float(pow((pow(x, 2)+pow(c, 2)), 1/3));
    cout << y;
}
