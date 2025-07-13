#include <iostream>
#include <string>

using namespace std;

string A;

bool two(string *s) {
    int len = (*s).length(), cnt;
    bool right = true;
    for (int i = 0; i < len; i++) {
        cnt = 0;
        for (int j = i+1; j < len; j++) {
            if ((*s)[i] != (*s)[j]) {
                right = false;
                return right;
            }
        }
    }
    return right;
}

int main() {
    cin >> A;

    // Please write your code here.
    if (two(&A)) cout << "No";
    else cout << "Yes";
    return 0;
}