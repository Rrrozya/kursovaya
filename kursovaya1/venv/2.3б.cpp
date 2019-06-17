#include <iostream>

using namespace std;

int main() {
    int t1 = 50;
    float s1 = 0.9;
    float t2 = 2.45;
    float s2 = 0.92;
    float t3 = 3.55;
    float s3 = 0.88;
    int time_1, time_2;
    cin >> time_1 >> time_2;
    cout << "1 оператор: будние дни - " << t1 * time_1 << ", выходные дни - " <<  t1 * time_2 * s1 << endl;
    cout << "2 оператор: будние дни - " <<  t2 * time_1 <<  ", выходные дни - " <<  t2 * time_2 * s2 << endl;
    cout << "3 оператор: будние дни - " << t3 * time_1 <<  ", выходные дни - " << t3 * time_2 * s3;
}
