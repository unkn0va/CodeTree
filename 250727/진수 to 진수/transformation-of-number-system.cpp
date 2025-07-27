#include <iostream>
#include <string>

using namespace std;

int a, b;
string n;

int main() {
    cin >> a >> b;
    cin >> n;

    // Please write your code here.
    int num = 0, len = n.length();
    int binary[20], cnt = 0;
    
    for (int i = 0; i < len; i++) {
        num = num * a + (n[i] - '0');
    }

    while (1) {
        if (num < b) {
            binary[cnt++] = num % b;
            break;
        }

        binary[cnt++] = num % b;
        num /= b;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << binary[i];
    }
    
    return 0;
}