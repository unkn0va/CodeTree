#include <iostream>

using namespace std;

int n;
int x[100];
char dir[100];

int main() {
    cin >> n;
    int blocks[2001] = {};
    int num = 1000, sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> dir[i];
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (dir[i] == 'R') {
            for (int j = num; j < num+x[i]; j++) {
                blocks[j]++;
            }
            num += x[i];
        }
        else {
            for (int j = num-1; j >= num-x[i]; j--) {
                blocks[j]++;
            }
            num -= x[i];
        }
    }
    for (int i = 0; i < 2001; i++) {
        if (blocks[i] > 1) {
            sum++;
        }
    }
    cout << sum;
    return 0;
}