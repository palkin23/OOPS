#include<iostream>
using namespace std;
class Date {
private:
    int month, day, year;
    static char slash;

    void setMonth(int m) {
        month = (m > 12) ? 12 : m;
    }

    void setYear(int y) {
        year = y;
    }

    bool isLeapYear() {
        return (year % 400 == 0 ||
               (year % 4 == 0 && year % 100 != 0));
    }

    int getMaxDays() {
        if (month == 4 || month == 6 ||
            month == 9 || month == 11)
            return 30;

        if (month == 2)
            return isLeapYear() ? 29 : 28;

        return 31;
    }

    void setDay(int d) {
        int maxDays = getMaxDays();

        if (d > maxDays)
            day = maxDays;
        else
            day = d;
    }

public:
    static char slash;

    void setDate(int m, int d, int y) {
        setMonth(m);
        setYear(y);
        setDay(d);
    }

    void increaseDay() {
        day++;

        if (day > getMaxDays()) {
            day = 1;
            month++;

            if (month > 12) {
                month = 1;
                day = 1;
                year++;
            }
        }
    }

    void showDate() {
        cout << month << slash << day
             << slash << year << endl;
    }
};

char Date::slash = '/';