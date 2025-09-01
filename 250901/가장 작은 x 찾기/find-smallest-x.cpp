#include <iostream>

using namespace std;

int n;
int a[10], b[10];

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    // Please write your code here.
    int num = 0, val;
    bool check = false;
    while (1) {
        num += 1;
        val = num;
        for (int i = 0; i < n; i++) {
            val *= 2;
            if (val >= a[i] && val <= b[i]) {
                check = true;
                continue;
            }
            check = false;            
        }
        if (check == true) {
            cout << num;
            break;
        }
    }

    return 0;
}