#include <iostream>

using namespace std;

int N;
int arr[1000];

int main() {
    cin >> N;
    int cnt = 0, blocks[1001] = {}, max_val = 0;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Please write your code here.
    for (int i = 0; i < N; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            cnt = 1;
        }
        else {
            cnt++;
            blocks[i] = cnt;
        }
    }

    for (int i = 0; i < 1001; i++) {
        if (blocks[i] > max_val) max_val = blocks[i];
    }

    cout << max_val;
    return 0;
}