#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int n, k;
string t;
string str[100];

int main() {
    cin >> n >> k >> t;
    bool right;
    int cnt = 0, len = t.length();

    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }

    // Please write your code here.
    sort(str, str+n);
    for (int i = 0; i < n; i++) {        
        right = true;
        for (int j = 0; j < len; j++) {
            if (str[i][j] != t[j]) {
                right = false;
            }  
        }
        if (right == true) cnt++;
        if (cnt == k) {
                cout << str[i];
                break;
            }
    }
    return 0;
}