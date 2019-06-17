#include <iostream>
#include <cmath>

using namespace std;

float y(float x){
    float a = float(pow(x, 3) + 3 * x * x - 3);
    return a;
}

int main() {
    float x = 2;
    while (round(x*100)/100 <= 4){
        cout << "x = " << round(x*100)/100 << ", y = "  << round(y(x)*1000)/1000 << endl;
        x += 0.2;
    }
}
