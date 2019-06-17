#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    int b[n*m];
    int c = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            b[c] = a[i][j];
            c++;
        }
    }
    for (int i = 0; i < n*m; i++){
        cout << b[i] << " ";
    }
}
