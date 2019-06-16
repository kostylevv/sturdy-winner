#include <iostream>

using namespace std;

bool isLeapYear(int year);

int main() {
    cout << "hw c++\n";
    int year;
    while(true) {
        cin >> year;
        if (isLeapYear(year)) {
            cout << "Year " << year << " is leap.\n";
        } else {
            cout << "Year " << year << " is common.\n";
        }
    }
}

bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
     } else if (year % 100 != 0) {
         return true;
     } else if (year % 400 != 0) {
        return false;
     } else {
         return true;
     }
}