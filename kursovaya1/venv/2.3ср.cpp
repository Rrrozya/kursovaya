#include <iostream>
#include <math.h>

using namespace std;

float f(float a, float b, float z, float x){
    float y;
    if (x < pow(a, 3))
        y =  float(a * pow(sin(x), 2) + b * cos(z * x + a));
    else if ((pow(a, 3) <= x) && (x <= b))
        y = float(pow(a + b * x, 2) - sin(a + z * x));
    else if (x > b)
        y = float(pow(x - sin(b * x + z), 0.5));
    return y;
}

int main() {
    float a, b, x, z, r1;

    a = 1.2;
    b = 7.2;
    cin >> x;
    z = exp(x);
    r1 = f(a, b, z, x);
    cout << "При a = " <<  a <<  ", b = " <<  b << ", z = " << z << " значение y = " << r1 << endl;

    a = float(-1.5);
    b = 3.2;
    z = float(pow(exp(x), 2));
    r1 = f(a, b, z, x);
    cout << "При a = " <<  a <<  ", b = " <<  b << ", z = " << z << " значение y = " << r1 << endl;

    a = 1.7;
    b = 5.5;
    z = float(exp(1.0)*exp(1.0)*exp(1.0));
    r1 = f(a, b, z, x);
    cout << "При a = " <<  a <<  ", b = " <<  b << ", z = " << z << " значение y = " << r1 << endl;
}
