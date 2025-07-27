#include <iostream>

using namespace std;

int a, b, c, d;

int main() {
    cin >> a >> b >> c >> d;

    // Please write your code here.
    int start, end;
    start = 60 * a + b;
    end = 60 * c + d;
    cout << end - start;
    return 0;
}