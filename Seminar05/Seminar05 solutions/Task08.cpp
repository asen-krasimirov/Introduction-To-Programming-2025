#include <iostream>
using namespace std;

void calculateEndTime(int startHour, int startMinute, int duration) {
    int endHour = startHour + (startMinute + duration) / 60;
    int endMinute = (startMinute + duration) % 60;

    cout << endHour << " " << endMinute << endl;
}

int main() {
    int n;
    cin >> n; 

    int latestEndHour = 0, latestEndMinute = 0;

    for (int i = 0; i < n; i++) {
        int startHour, startMinute, duration;
        cin >> startHour >> startMinute >> duration;

        calculateEndTime(startHour, startMinute, duration);
    }

    return 0;
}
