//
// Created by Kadie Comi on 9/24/26.
//

#include "Time.h"

// constructor
Time::Time(unsigned short hour, unsigned short minute, char am_pm) {
    if (am_pm == 'P' || am_pm == 'p') {
        if (hour != 12) {
            hour += 12;
        }
    }
    else {
        if (hour == 12) {
            hour = 0;
        }
    }
    this->hour = hour;
    this->minute = minute;
}

// operator<<()
std::ostream& operator<<(std::ostream& os, const Time& time) {
    int hour = 0;
    char am_pm = '?';
    if (time.hour == 12) {
        hour = 12;
        am_pm = 'P';
    }
    else if (time.hour == 0) {
        hour = 12;
        am_pm = 'A';
    }
    else if (time.hour < 12) {
        hour = time.hour;
        am_pm = 'A';
    }
    else {
        hour = time.hour - 12;
        am_pm = 'P';
    }
    os << hour << ":";

    if (time.minute < 10) {
        os << "0";
    }
    os << time.minute << " " << am_pm << "M";

    return os;

}