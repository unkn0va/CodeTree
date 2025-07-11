#include <iostream>
#include <algorithm>
using namespace std;

int n, m;

void num(int n, int m) {
    int min_val = min(n, m);
    int max_val = max(n, m);
    int result;
    for (int i = 2; i <= max_val; i++) {
        result = min_val * i;
        if (result % max_val == 0) {
            cout << result;
            break;
        }
    }
}

int main() {
    cin >> n >> m;

    // Please write your code here.
    num(n, m);
    return 0;
}