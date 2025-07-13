#include <iostream>
#include <string>

using namespace std;

string A;

bool isRight(string *s) {
    bool right = false;
    string str = "";
    int len = (*s).length();
    for (int i = len-1; i >= 0; i--) {
        str += (*s)[i];
    }
    
    if (str == *s) right = true;
    return right;
}

int main() {
    cin >> A;

    // Please write your code here.
    if (isRight(&A)) cout << "Yes";
    else cout << "No";
    return 0;
}