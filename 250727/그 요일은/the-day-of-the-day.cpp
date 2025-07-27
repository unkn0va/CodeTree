#include <iostream>

using namespace std;

int m1, m2, d1, d2;
string A;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;
    cin >> A;

    // Please write your code here.
    string mon[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
    int day[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int start = 0, end = 0, diff, idx;
    for (int i = 0; i < m1-1; i++) {
        start += day[i];
    }
    for (int i = 0; i < m2-1; i++) {
        end += day[i];
    }
    start += d1;
    end += d2;

    diff = end - start;
    for (int j = 0; j < 7; j++) {
        if (A == mon[j]) {
            idx = j;
            break;
        }
    }
    if (diff == 0) {
        if (A == "Mon") cout << 1;
        else cout << 0;
    }
    else {
        diff -= idx;
        cout << diff / 7 + 1;
    } 
    return 0;
}