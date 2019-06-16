#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, R;
    cin >> a >> R;
    if (a * a > M_PI * R * R) {
        cout << "Площадь квадрата больше площади круга.";
    } else {
        if (a * a < M_PI * R * R){
            cout << "Площадь круга больше площади квадрата.";
        } else {
            if (a * a == M_PI * R * R){
                cout << "Площади квадрата и круга равны";
            }
        }
    }
}
