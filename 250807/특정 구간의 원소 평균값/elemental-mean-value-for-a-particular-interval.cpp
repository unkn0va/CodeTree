#include <iostream>

using namespace std;

int n;
int arr[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    int total = 0, sum = 0;
    double m = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            total = 0;
            for (int k = i; k <= j; k++) {
                total += arr[k];
            }
            m = (double)total / (j-i+1);
            for (int l = i; l <= j; l++) {
                if (arr[l] == m) {
                    sum++;
                    break;
                }
            }
        }
    }

    cout << sum;

    return 0;
}