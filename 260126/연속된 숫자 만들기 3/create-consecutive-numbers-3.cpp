#include <iostream>

using namespace std;

int a[3];

int main() {
    for (int i = 0; i < 3; i++) cin >> a[i];

    // Please write your code here.
    if (a[1]-a[0] == 1 && a[2]-a[1] == 1) cout << 0;
    else {
        int max_v = max(a[1]-a[0], a[2]-a[1]);
        cout << max_v - 1;
    }
    
    return 0;
}