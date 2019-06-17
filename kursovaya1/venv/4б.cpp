#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int mas[15];
    int med = 0;
    for (int i = 0; i < 15; i++){
        cin >> mas[i];
        med += mas[i];
    }
    float mas1[15];
    for (int i = 0; i < 15; i++){
        mas1[i] = mas[i] - float(med)/15;
        cout << mas1[i] << " ";
    }
}
