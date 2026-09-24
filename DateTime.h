#ifndef DATETIME_HPP
#define DATETIME_HPP

#include <Date.hpp>
#include <Time.hpp>

class DateTime {

private:
    Date date;
    Time time;

public:
    DateTime(Date date, Time time);
    // operator<<()

};

#endif
