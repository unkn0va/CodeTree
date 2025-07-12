#include <iostream>

using namespace std;

int a;
int c;
char o;

int operation(int a, char o, int c) {
    if (o == '+') return a + c;
    else if (o == '-') return a - c;
    else if (o == '*') return a * c;
    else if (o = '/') return a / c;
}

int main() {
    cin >> a >> o >> c;

    // Please write your code here.
    if (o == '+' || o == '-' || o == '*' || o == '/')
        cout << a << " " << o << " " << c << " = " << operation(a, o, c);
    else cout << "False";

    return 0;
}