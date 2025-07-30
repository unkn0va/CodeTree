#include <iostream>
#include <algorithm>

using namespace std;

int n, m;
char d[1000];
int t[1000];
char d2[1000];
int t2[1000];

int main() {
    cin >> n >> m;
    int times1[1001] = {}, times2[1001] = {}, cur_time1 = 1, count1 = 0, cur_time2 = 1, count2 = 0;
    bool right = false;

    for (int i = 0; i < n; i++) {
        cin >> d[i] >> t[i];
        
    }

    for (int i = 0; i < m; i++) {
        cin >> d2[i] >> t2[i];
        
    }

    // Please write your code here.
    for (int i = 0; i < n; i++) {
        if (d[i] == 'R') {
            for (int j = cur_time1; j < cur_time1 + t[i]; j++) {
                times1[j] = ++count1;
            }
            cur_time1 += t[i];
        }
        else {
            for (int j = cur_time1; j < cur_time1 + t[i]; j++) {
                times1[j] = --count1;
            }
            cur_time1 += t[i];
        }
    }
    
    for (int i = 0; i < m; i++) {
        if (d2[i] == 'R') {
            for (int j = cur_time2; j < cur_time2 + t2[i]; j++) {
                times2[j] = ++count2;
            }
            cur_time2 += t2[i];
        }
        else {
            for (int j = cur_time2; j < cur_time2 + t2[i]; j++) {
                times2[j] = --count2;
            }
            cur_time2 += t2[i];
        }
    }

    

    for (int i = 1; i < min(cur_time1, cur_time2); i++) {
        if (times1[i] == times2[i]) {
            right = true;
            cout << i;
            break;
        }
    }
    if (right == false) cout << -1;
    
    return 0;
}