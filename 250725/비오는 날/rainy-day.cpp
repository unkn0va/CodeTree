#include <iostream>
#include <string>

using namespace std;

int n;
string date[100];
string day[100];
string weather[100];

class Weather {
    public:
        string data, day, weather;

        Weather(string data = "", string day = "", string weather = "") {
            this->data = data;
            this->day = day;
            this->weather = weather;
        }
};

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> date[i] >> day[i] >> weather[i];
    }

    // Please write your code here.
    Weather rain[105];
    int lately;

    for (int j = 0; j < n; j++) {
        rain[j] = Weather(date[j], day[j], weather[j]);    
    }

    for (int j = 0; j < n; j++) {
        if (rain[j].weather == "Rain") {
            lately = j;
            break;
        }
    }

    for (int j = 0; j < n; j++) {
        if (rain[j].weather == "Rain" && rain[j].data < rain[lately].data) lately = j;
    }

    cout << rain[lately].data << " " << rain[lately].day << " " << rain[lately].weather;
    
    return 0;
}