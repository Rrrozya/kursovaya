#include <iostream>
#include <cmath>

using namespace std;

int f(int n){
    int sum = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum += i;
        }
    }
    int cnt;
    if (sum == n){
        cnt = 1;
    } else {
        cnt = 0;
    }
    return cnt;
}

int main() {
    int x, b = 0;
    cin >> x;
    for (int i = 2; i <= x; i++){
        if (f(i) == 1){
            cout << i << endl;
            b += 1;
        }
    }
    if (b == 0)
        cout << "На данном промежутке совершенных чисел нет.";
}
