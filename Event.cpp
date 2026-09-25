#include "Event.h"

    Event::Event(string name, string description, DateTime start, DateTime end, string location) : this->name(name), this->description(description), this->start(start), this->end(end), this->location(location){}

    string Event::get_name() const {
        return name;
    }

    string Event::get_description() const {
        return description;
    }

    DateTime Event::get_start() const {
        return start;
    }

    DateTime Event::get_end() const {
        return end;
    }

    string Event::get_location() const {
        return location;
    }

#endif
