#include <iostream>

using namespace std;

int N;

void printString(int n) {
    if (n == 0) return;
    printString(n-1);
    cout << "HelloWorld" << endl;
}

int main() {
    cin >> N;

    // Please write your code here.
    printString(N);
    
    return 0;
}