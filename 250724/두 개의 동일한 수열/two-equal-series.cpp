#include <iostream>
#include <algorithm>

using namespace std;

int n;
int A[100];
int B[100];

int main() {
    cin >> n;
    bool right = true;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    // Please write your code here.
    sort(A, A+n);
    sort(B, B+n);
    for (int j = 0; j < n; j++) {
        if (A[j] != B[j]) {
            right = false;
            break;
        }
    }
    if (right == true) cout << "Yes";
    else cout << "No";
    return 0;
}