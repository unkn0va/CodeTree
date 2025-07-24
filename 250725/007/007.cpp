#include <iostream>
#include <string>

using namespace std;

string secret_code;
char meeting_point;
int timea;

class sec {
    public:
        string code;
        char place;
        int time;

        sec(string code, char place, int time) {
            this->code = code;
            this->place = place;
            this->time = time;
        }
};

int main() {
    cin >> secret_code >> meeting_point >> timea;

    // Please write your code here.
    sec work = sec(secret_code, meeting_point, timea);
    cout << "secret code : " << work.code << endl;
    cout << "meeting point : " << work.place << endl;
    cout << "time : " << work.time;
    return 0;
}