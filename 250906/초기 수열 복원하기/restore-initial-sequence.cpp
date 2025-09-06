#include <iostream>

using namespace std;

int n;
int adjacent[1000];

int main() {
    cin >> n;

    for (int i = 0; i < n - 1; i++) {
        cin >> adjacent[i];
    }

    // Please write your code here.
    for (int i = 1; i <= n; i++) {
        int val[1000] = {};
        val[0] = i;
        int check[1000] = {};
        bool c = true;
        for (int j = 1; j < n; j++) {
            val[j] = adjacent[j-1]-val[j-1];
            if (check[val[j]] != 0) {
                c = false;
                break;
            }
            check[val[j]] = 1;
        }

        if (c == true) {
            for (int k = 0; k < n; k++) {
                cout << val[k] << " ";
            }
            break;
        }

    }

    return 0;
}