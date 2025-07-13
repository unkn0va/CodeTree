#include <iostream>

using namespace std;

int n, m;
int A[100];

int total(int m) {
    int sum = 0;
    while (m != 1) {
        sum += A[m-1];
        if (m % 2 == 0) m /= 2;
        else m -= 1;
    }
    sum += A[0];
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    // Please write your code here.
    cout << total(m);
    return 0;
}