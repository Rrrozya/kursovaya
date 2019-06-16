#include <iostream>
#include <math.h>

using namespace std;

int main() {
    float y, d, x, r;
    cin >> y >> d >> x;
    r = float((pow(cos(y), 3)+pow(2, x)*d)/(exp(y)+log(pow(sin(x), 2)+7.4)));
    cout << r;
}
