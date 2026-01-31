#include <iostream>

using namespace std;

int n;
int a[101];

int main() {
    cin >> n;
    int min_val = 101, min_val2 = 101, idx = -1;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        min_val = min(a[i], min_val);
    }

    // Please write your code here.
    for (int i = 1; i <= n; i++) {
        if (a[i] != min_val) {
            min_val2 = min(a[i], min_val2);
        }
    }    

    for (int i = 1; i <= n; i++) {
        if (a[i] == min_val2 && idx == -1) idx = i;
        else if (a[i] == min_val2 && idx != -1) {
            idx = -1;
            break;
        }
    }

    cout << idx;

    return 0;
}