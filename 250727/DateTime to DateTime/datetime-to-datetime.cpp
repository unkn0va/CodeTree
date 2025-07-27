#include <iostream>

using namespace std;

int a, b, c;

int main() {
    cin >> a >> b >> c;

    // Please write your code here.
    int start, end;
    start = 60*24*11 + 60*11 + 11;
    end = 60*24*a + 60*b + c;
    
    if (end < start) cout << -1;
    else cout << end - start;
    return 0;
}