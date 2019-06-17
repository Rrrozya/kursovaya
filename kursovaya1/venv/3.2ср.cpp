#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, cnt = 0;
    if (n == 0){
        cout << 1;
    } else {
        while (n > 0){
            cnt += 1;
            n = n / 10;
        }
        cout << cnt;
    }
}
