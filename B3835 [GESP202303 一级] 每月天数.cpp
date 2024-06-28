#include <iostream>
using namespace std;

bool runnian(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daymounter(int year, int month) {
    int daysinmonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && runnian(year)) {
        return 29;
    }
    return daysinmonth[month];
}

int main() {
    int year, month;
    cin >> year >> month;
    cout << daymounter(year, month) << endl;
    return 0;
}
