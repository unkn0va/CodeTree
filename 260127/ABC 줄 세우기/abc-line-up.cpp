#include <iostream>

using namespace std;

int n;
char arr[26];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];

    // Please write your code here.
    int num[27] = {}, temp = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        num[i] = arr[i] - 'A' + 1;
    }
    
    for (int i = 0; i < (n * (n-1)) / 2; i++) {
        for (int j = 0; j < n-1; j++) {
            if (num[j] > num[j+1]) {
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
            cnt++;
            }
        }
    }

    cout << cnt;

    return 0;
}