#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    // Please write your code here.
    int len = A.length(), total = 0;
    for (int i = 0; i < len-2; i++) {
        if (A[i] == '(' && A[i+1] == '(') {
            for (int j = i + 2; j < len-1; j++) {
                if (A[j] == ')' && A[j+1] == ')') total++;
            }
        }
    }

    cout << total;

    return 0;
}