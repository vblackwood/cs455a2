#ifndef DATE_H
#define DATE_H

#include <iostream>
class Date {

private:
    unsigned short year;
    unsigned short month;
    unsigned short day;

public:
    Date(unsigned short year, unsigned short month, unsigned short day);
    // operator<<()
    friend std::ostream& operator<<(std::ostream& os, const Date& date);
};

#endif
