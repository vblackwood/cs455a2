//
// Created by Kadie Comi on 9/24/26.
//

#include "DateTime.h"

namespace club {

// constructor
DateTime::DateTime(Date d, Time t) : date(d), time(t) {}

// operator<<()
std::ostream& operator<<(std::ostream& os, const DateTime& dt) {
    os << dt.date << " " << dt.time;
    return os;
}

}
