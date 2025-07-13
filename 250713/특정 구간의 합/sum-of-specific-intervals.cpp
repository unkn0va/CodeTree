#include <iostream>

using namespace std;

int n, m;
int arr[100];

int total(int *a, int *b) {
    int sum = 0;
    for (int i = *a - 1; i < *b; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        cout << total(&a1, &a2) << endl;
    }

    // Please write your code here.

    return 0;
}