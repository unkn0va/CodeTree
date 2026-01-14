#include <iostream>

using namespace std;

int a, b, x, y;

int main() {
    cin >> a >> b >> x >> y;

    // Please write your code here.
    int step, diff1, diff2;
    step = abs(a - b);
    diff1 = min(abs(y-a), abs(x-a));
    diff2 = min(abs(y-b), abs(x-b));
    if (step > diff1 + diff2) cout << diff1 + diff2;
    else cout << step;

    return 0;
}