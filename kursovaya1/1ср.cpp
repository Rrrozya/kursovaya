#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float y, w;
    cin >> y >> w;
    float v = float(pow((y+2*w), 3)/log(y+0.75));
    cout << v;
    return 0;
}
