#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int imax, buf;
    for (int i = 0; i < n - 1; i++){
        imax = i;
        for (int k = i + 1; k < n; k++){
            if (a[k][n-1] > a[imax][n-1])
                imax = k;
        }
        for (int j = 0; j < n; j++){
            buf = a[i][j];
            a[i][j] = a[imax][j];
            a[imax][j] = buf;
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
