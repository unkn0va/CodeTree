#include <iostream>

using namespace std;

int N, K;
int A[100], B[100];

int main() {
    cin >> N >> K;
    int num[101] = {};

    for (int i = 0; i < K; i++) {
        cin >> A[i] >> B[i];
    }

    // Please write your code here.
    for (int i = 0; i < K; i++) {
        for (int j = A[i]-1; j < B[i]; j++) {
            num[j]++;
        }
    }

    int max_val = num[0];

    for (int i = 1; i < N; i++) {
         if (max_val < num[i]) max_val = num[i];
    }
    cout << max_val;
    return 0;
}