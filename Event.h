#ifndef EVENT_H
#define EVENT_H

#include <string>

#include "DateTime.h"

namespace club {

class Event {
    private:
        std::string name;
        std::string description;
        DateTime start;
        DateTime end;
        std::string location;
    public:
        Event(std::string name, std::string description, DateTime start, DateTime end, std::string location);
        std::string get_name() const;
        std::string get_description() const;
        DateTime get_start() const;
        DateTime get_end() const;
        std::string get_location() const;
};

}

#endif
