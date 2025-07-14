#include <iostream>

using namespace std;

int n;
int arr[100];

int max_val(int n) {
    int m = arr[0];
    for (int i = 1; i < n; i++) {
        if (m < arr[i]) m = arr[i];
    }
    return m;
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << max_val(n);

    return 0;
}