#include <iostream>

using namespace std;

int Y, M, D;

bool year() {
    if (Y % 4 == 0 && Y % 100 == 0 && Y % 400 == 0) return true;
    else if (Y % 4 == 0 && Y % 100 == 0) return false;
    else if (Y % 4 == 0) return true;
    else return false;
}

int isLastDay() {
    if (year() && M == 2) return 29;
    else if (M == 2) return 28;
    else if (M == 4 || M == 6 || M == 9 || M == 11) return 30;
    return 31;
}

int main() {
    cin >> Y >> M >> D;

    // Please write your code here.
    if (D > isLastDay()) cout << -1;
    else {
        if (M >= 3 && M <= 5) cout << "Spring";
        else if (M >= 6 && M <= 8) cout << "Summer";
        else if (M >= 9 && M <= 11) cout << "Fall";
        else cout <<"Winter";
    }
    
    return 0;
}