#include <iostream>
#include <cmath>

using namespace std;

float y(float x){
    float a = 0;
    if (x < 1)
        a = float(1 - pow(abs(cos(2 * x)), 0.5));
    if ((1 <= x) && (x <= 2.5))
        a = x * x - x;
    if (x > 2.5)
        a = 1 + x * x;
    return a;
}

int main() {
    float x = 0;
    while (round(x*100)/100 <= 3){
        cout << "x = " << round(x*100)/100 << ", y = " << round(y(x)*1000)/1000 << endl;
        x += 0.2;
    }
}
