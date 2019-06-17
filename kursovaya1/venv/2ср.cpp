#include <iostream>

using namespace std;

int main() {
    int k, l, m, n;
    if (((k > 0) && (l > m)) || ((k < 0) && (2 * l - 3 * n < 0)))
        cout << "True";
    else
        cout << "False";
}
