#include <iostream>

using namespace std;

int n;
int A[100];
int B[100];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // Please write your code here.
    int sum = 0;
    for (int i = 0; i < n-1; i++) {
        if (A[i]-B[i] > 0) A[i+1] += (A[i]-B[i]);
        sum += A[i]-B[i];
    }

    cout << sum;


    return 0;
}