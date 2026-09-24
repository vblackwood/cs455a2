//
// Created by Kadie Comi on 9/24/26.
//

#include "Date.h"

Date::Date(unsigned short year, unsigned short month, unsigned short day) {
    this->year = year;
    this->month = month;
    this->day = day;
}
// operator<<()
std::ostream& operator<<(std::ostream& os, const Date& date) {
    if (date.month < 10) {
        os << "0";
    }
    os << date.month << "/" ;
    if (date.day < 10) {
        os << "0";
    }
    os << date.day << "/" << date.year;

    return os;
}