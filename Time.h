#ifndef TIME_H
#define TIME_H
#include <iosfwd>
#include <iostream>

class Time {

private:
    unsigned short hour;

public:
    unsigned short minute;
    Time(unsigned short hour, unsigned short minute, char am_pm);
    // operator<<()
    friend std::ostream& operator<<(std::ostream& os, const Time& time);
};

#endif
