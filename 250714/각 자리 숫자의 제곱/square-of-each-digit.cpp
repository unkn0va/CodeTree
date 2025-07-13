#include <iostream>

using namespace std;

int N;

int f(int n) {
    if (n < 10) return n*n;
    
    return f(n/10) + (n%10) * (n%10);
}

int main() {
    cin >> N;

    // Please write your code here.
    cout << f(N);
    return 0;
}