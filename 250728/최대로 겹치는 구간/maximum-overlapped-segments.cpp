#include <iostream>

using namespace std;

int n;
int x1[100], x2[100];

int main() {
    cin >> n;
    int blocks[201] = {};
    int max_val;

    for (int i = 0; i < n; i++) {
        cin >> x1[i] >> x2[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        for (int j = x1[i] + 100; j < x2[i]+100; j++) {
            blocks[j]++;
        }
    }
    max_val = blocks[0];
    for (int i = 1; i < 201; i++) {
        if (blocks[i] > max_val) max_val = blocks[i];
    }
    cout << max_val;
    return 0;
}