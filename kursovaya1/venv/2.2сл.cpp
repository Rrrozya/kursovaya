#include <iostream>

using namespace std;

int main() {
    int n, sum = 0, comp = 1;
    cin >> n;
    while (n > 0){
        sum += n % 10;
        comp *= (n % 10);
        n = n / 10;
    }
    if ((sum > 9) && (sum < 100))
        cout << "Сумма цифр является двухзначным числом" << endl;
    else
        cout << "Сумма цифр не является двухзначным числом" << endl;
    if ((comp > 99) && (comp < 1000))
        cout << "Произведение чисел является трехзначным числом" << endl;
    else
        cout << "Произведение чисел не является трехзначным числом" << endl;
}
