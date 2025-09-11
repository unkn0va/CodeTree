#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b;
    cin >> c >> d;

    // Please write your code here.
    if (a <= c && b >= d) cout << b-a;
    else if (b < c) cout << (b-a) + (d-c);
    else if (a < c && b > c && b < d) cout << (c-a) + (d-c);
    else if (c <= a && d >= b) cout << d-c;
    else if (d < a) cout << (d-c) + (b-a);
    else if (c < a && d > a && d < b) cout << (a-c) + (b-a);

    return 0;
}