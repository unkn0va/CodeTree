#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int len = A.length(), sum = 0;
    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j < len; j++) {
            if (A[i] == '(' && A[j] == ')') sum++;
        }
    }

    cout << sum;

    return 0;
}