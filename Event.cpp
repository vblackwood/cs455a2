#include "Event.h"
namespace club {

    Event::Event(std::string name, std::string description, DateTime start, DateTime end, std::string location) : name(name), description(description), start(start), end(end), location(location){}

    std::string Event::get_name() const {
        return name;
    }

    std::string Event::get_description() const {
        return description;
    }

    DateTime Event::get_start() const {
        return start;
    }

    DateTime Event::get_end() const {
        return end;
    }

    std::string Event::get_location() const {
        return location;
    }

}
