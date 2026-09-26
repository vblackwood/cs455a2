#ifndef DATETIME_H
#define DATETIME_H

#include "Date.h"
#include "Time.h"
#include <iostream>

namespace club {

class DateTime {

private:
    Date date;
    Time time;

public:
    DateTime(Date d, Time t);
    // operator<<()
    friend std::ostream& operator<<(std::ostream& os, const DateTime& dt);

};

}

#endif
