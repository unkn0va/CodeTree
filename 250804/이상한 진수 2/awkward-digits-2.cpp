#include <iostream>

using namespace std;

string a;

int main() {
    cin >> a;

    // Please write your code here.
    int len = a.length(), num = 0;
    bool t = false;
    for (int i = 0; i < len; i++) {
        if (a[i] == '0') {
            a[i] = '1';
            t = true;
            break;
        }
    }
    if (t == false) {
        a[len-1] = '0';
    }

    for (int i = 0; i < len; i++) {
        num = num*2 + (a[i]-'0');
    }
    
    cout << num;
    return 0;
}