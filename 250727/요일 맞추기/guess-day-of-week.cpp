#include <iostream>
#include <string>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    string arr[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int start = 0, end = 0, diff;
    for (int i = 0; i < m1-1; i++) {
        start += day[i];
    }
    for (int i = 0; i < m2-1; i++) {
        end += day[i];
    }
    start += d1;
    end += d2;

    diff = end - start;
    if (diff >= 0) {
        cout << arr[diff % 7];
    }
    else {
        cout << arr[7 - (-diff % 7)];
    }
    return 0;
}