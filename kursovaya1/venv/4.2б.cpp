#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int mas[5][6];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> mas[i][j];
        }
    }
    float med = 0;
    for (int j = 0; j < 6; j++){
        for (int i  = 0; i < 5; i++){
            med += mas[i][j];
        }
        med /= 5;
        cout << "Среднее арифметическое столбца №" << j+1 << " = " << med << endl;
        med = 0;
    }
    int m = INT_MIN + 1;
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 6; j++){
            if (mas[i][j] > m){
                m = mas[i][j];
            }
        }
        cout << "Максимальный элемент строки №" << i+1 << "=" <<  m << endl;
        m = INT_MIN + 1;
    }
    m = INT_MAX - 1;
    for (int i  = 0; i < 5; i++){
        for (int j = 0; j < 6; j++){
            if (mas[i][j] < m){
                m = mas[i][j];
            }
        }
        cout << "Минимальный элемент строки №" << i+1 << "=" <<m<< endl;
        m = INT_MAX - 1;
    }
}
