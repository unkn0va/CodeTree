#include <iostream>

using namespace std;

int m1, d1, m2, d2;

int main() {
    cin >> m1 >> d1 >> m2 >> d2;

    // Please write your code here.
    int arr[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int start = 0, end = 0;

    for (int i = 0; i < m1; i++) {
        start += arr[i];
    }
    for (int i = 0; i < m2; i++) {
        end += arr[i];
    }
    start += d1;
    end += d2;

    cout << end - start;

    return 0;
}