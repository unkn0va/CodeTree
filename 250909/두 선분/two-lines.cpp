#include <iostream>

using namespace std;

int x1, x2, x3, x4;

int main() {
    cin >> x1 >> x2 >> x3 >> x4;

    // Please write your code here.
    bool check = false;
    for (int i = x1; i <= x2; i++) {
        for (int j = x3; j <= x4; j++) {
            if (i == j) {
                check = true;
            }
        }

        if (check == true) {
            cout << "intersecting";
            break;
        }
    }

    if (check == false) {
        cout << "nonintersecting";
    }

    return 0;
}