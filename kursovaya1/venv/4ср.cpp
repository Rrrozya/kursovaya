#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x[15];
    for (int i = 0; i < 15; i++){
        cin >> x[i];
    }
    float y[15];
    for (int i = 0; i < 15; i++){
        y[i] = float(cos(x[i] * x[i]) + 2.97 * pow(log(i * i)/log(10), 2));
    }
    float mas[30];
    for (int i = 0; i < 15; i++){
        mas[i] = x[i];
        mas[30-i-1] = y[i];
    }
    for(int i = 0; i < 29; i++){
        for(int j = i + 1; j < 30; j++){
            if (mas[i] < mas[j]){
                float temp = mas[i];
                mas[i] = mas[j];
                mas[j] = temp;
            }
        }
    }
    for (int i = 0; i < 30; i++){
        cout << mas[i] << " ";
    }
}
