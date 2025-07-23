#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int lcmArr(int arr[], int k) {
    if (k == 1) return arr[0];
    return lcm(arr[k-1], lcmArr(arr, k-1));
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    cout << lcmArr(arr, n);
    return 0;
}